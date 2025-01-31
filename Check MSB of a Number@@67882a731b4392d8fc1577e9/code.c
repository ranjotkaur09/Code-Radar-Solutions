#include <stdio.h>
int main(){
    int num;
    printf("Enter a 32-bit inetger: ");
    scanf("%d",&num);
    if (num & (1<<32)) {
        printf("The MSB is set(1).\n");
    }
    else{
        printf("The MSB is not set(0).\n");
    }
    return 0;
}
    
    
    
    
    
    
    
    
    