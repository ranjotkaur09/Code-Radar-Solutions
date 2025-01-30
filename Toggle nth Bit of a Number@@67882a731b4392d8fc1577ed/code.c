#include <stdio.h>

int main(){
    int num;
    scanf("%d %d", &num,&n);
    int result=num^(1<<n);
    printf("%d", result);
    return 0;
}