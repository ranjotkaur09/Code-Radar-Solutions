#include <stdio.h>

int main(){
    int num;
    scanf("%d",&num);

    if(num>1 && num!=1){
        printf("Prime\n");
    }
    else{
        printf("Nor Prime\n");
    }
    return 0;

}