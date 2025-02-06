#include <stdio.h>

int main(){
    int num;
    sacnf("%d",&num);
    if(num>0){
        printf("Positive\n");
    }
    else{
        printf("Negative\n");
    }
    return 0;
}