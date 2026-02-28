/* 
2️⃣ Dynamic 1D array

Ask user for size
Allocate array
Take input
Print elements
Free memory
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
        fprintf(stderr, "Meomory allocation failed!");
        exit(EXIT_FAILURE);
    }
    
    printf("Enter %d elements: ", n);
    for(int i=0; i<n; i++){
        if(scanf("%d",p+i)!=1){
            printf("Invalid input!");
            free(p);
            exit(EXIT_FAILURE);
        }
    }
    
    for(int i=0; i<n; i++){
        printf("%d\t", *(p+i));
    }
    
    free(p);
    
    return 0;
}