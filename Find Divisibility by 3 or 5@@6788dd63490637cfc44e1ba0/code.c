#include <stdio.h>
int main(){
    int num;
    scanf("%d",&num);

    if(num % 3==0 && num % 5==0 ){
        printf("Divisible by Both");
    }
    else{
        printf("Not Divisible");
    }
    return 0;
}