/* 1. Write a function to input variable length string and store it in an array without memory wastage. */

#include<stdio.h>
#include<stdlib.h>

char* inputString(){
    char buffer[1000];
    
    printf("Enter string: ");
    
    if(fgets(buffer, sizeof(buffer), stdin)){
        char *p = buffer;
        
        while(*p && *p!='\n') p++;
        
        if(*p=='\n') *p = '\0';
        
        size_t len = p - buffer;
        
        char *dest = malloc(len + 1);
        
        if(!dest){
            fprintf(stderr, "Memory allocation failed!");
            exit(EXIT_FAILURE);
        }
        
        char *src = buffer;
        
        char *temp = dest;
        
        while((*dest++ = *src++));
        
        return temp;
    }else{
        fprintf(stderr, "String input failed!");
        exit(EXIT_FAILURE);
    }
}

int main(){
    char *p = inputString();
    
    printf("Entered string is: %s", p);
    
    free(p);
    
    return 0;
}