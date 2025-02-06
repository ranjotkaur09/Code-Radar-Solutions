#include <stdio.h>
int main(){
    int num;
    scanf("%d",&num);

    if(num % 3==0 && num % 5==0 ){
        printf("Divisible by Both\n");
    }
    else{
        printf("Not Divisible by Both\n");
    }
    return 0;
}