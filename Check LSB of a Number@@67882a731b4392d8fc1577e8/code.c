#include <stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    if(num&1){
        printf("LSB is 1\n");
    }
    else{
        printf("LSb is 0\n");
    }
    return 0;

}