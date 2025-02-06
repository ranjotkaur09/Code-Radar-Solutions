#include <stdio.h>

int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c){
        printf(" maximum number : %d\n", a);
    }
    else if(b>a && b>c ){
        printf(" maximum number : %d\n", b);
    }
    else{
        printf(" maximum number : %d\n", c);
    }
    return 0;
}