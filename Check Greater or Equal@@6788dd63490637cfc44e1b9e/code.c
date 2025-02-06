#include <stdio.h>

int main(){
    int a,b;
    scanf("%d",&a,&b);

    if(a>=b || b>=a){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }
    return 0;
}