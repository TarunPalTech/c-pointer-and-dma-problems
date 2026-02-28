/* 
5️⃣ Reverse Array
Reverse dynamic array using pointers
*/

#include<stdio.h>
#include<stdlib.h>

void reverseDynamicArray(int *p, int n){
    int *start = p;
    int *end = p + n - 1;
    
    int temp;
    while(start<end){
        temp = *start;
        *start++ = *end;
        *end-- = temp;
    }
}
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
    
    reverseDynamicArray(p, n);
    
    for(int i=0; i<n; i++){
        printf("%d\t", *(p+i));
    }
    free(p);
    
    return 0;
}