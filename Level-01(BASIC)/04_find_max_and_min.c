/* 
4️⃣ Find Maximum & Minimum

Dynamic array
Find largest and smallest element
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    printf("Enter size of the array: ");
    if(scanf("%d",&n)!=1 || n<1){
        fprintf(stderr, "Invalid input!");
        exit(EXIT_FAILURE);
    }
    
    int *p = calloc(n, sizeof(int));
    
    if(!p){
        fprintf(stderr, "Meomory allocation failed!\n");
        exit(EXIT_FAILURE);
    }
    
    printf("Enter %d elements: ", n);
    for(int i=0; i<n; i++){
        if(scanf("%d",p+i)!=1){
            fprintf(stderr, "Invalid input!");
            free(p);
            exit(EXIT_FAILURE);
        }
    }
    
    int min = p[0];
    int max = p[0];
    
    for(int i=1; i<n; i++){
        if(max<p[i]){
            max = p[i];
        }
        if(min>p[i]){
            min = p[i];
        }
    }
    
    printf("Smallest element is %d!\n", min);
    printf("Largest element is %d!", max);
    
    free(p);
    
    return 0;
}

// Important:-  We can solve it by using a single loop...