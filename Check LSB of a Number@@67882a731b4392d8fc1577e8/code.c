#include <stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    if(num & 1){
        printf("True");
    }
    else{
        printf("False");
    }
    return 0;

}