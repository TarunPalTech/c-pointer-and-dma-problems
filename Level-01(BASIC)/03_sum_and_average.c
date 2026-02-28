/* 
3️⃣ Sum and Average (You just did this)

Dynamic array
Calculate sum
Calculate average
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
    
    float *p = calloc(n, sizeof(float));
    
    if(!p){
        fprintf(stderr, "Meomory allocation failed!\n");
        exit(EXIT_FAILURE);
    }
    
    printf("Enter %d elements: ", n);
    float sum = 0; 
    for(int i=0; i<n; i++){
        if(scanf("%f",p+i)!=1){
            fprintf(stderr, "Invalid input!");
            free(p);
            exit(EXIT_FAILURE);
        }
        sum += *(p+i);
    }
    
    printf("Average is %.2f!", sum/n);
    
    free(p);
    
    return 0;
}