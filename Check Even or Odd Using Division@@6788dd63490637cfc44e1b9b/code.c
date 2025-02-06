#include <stdio.h>

int main(){
    int num1,num2;
    scanf("%d %d",&num1,&num2);

    if(num1 & num2 %2 == 0){
        printf("Even\n");
    }
    else{
        printf("Odd\n");
    }
    return 0;
}