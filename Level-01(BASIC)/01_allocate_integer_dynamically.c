/* 
🟢 LEVEL 1 — BASIC (Foundation of malloc & free)
1️⃣ Dynamic single variable

Allocate one integer dynamically

Take input
Print it
Free memory
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    int *p = malloc(sizeof(int));
    
    if(!p){
        fprintf(stderr, "Memory allocation failed!");
        exit(EXIT_FAILURE);
    }
    
    printf("Enter a value: ");
    if(scanf("%d", p) != 1){
        fprintf(stderr, "Invalid input!\n");
        free(p);
        exit(EXIT_FAILURE);
    }
    
    printf("Entered value is %d.", *p);
    
    free(p);
    
    return 0;
}