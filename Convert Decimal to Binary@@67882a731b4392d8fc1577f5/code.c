#include <stdio.h>
void decimalToBinary(int n){
    int binary[32];
    int index=0;

    if(n==0){
        printf("0");
        return 0;
    }

    while(n>0){
        binary[index++]=n&1;
        n>>=1;
    }

    for (int i = index-1; i>=0; i--){
        printf("%d",binary[i]);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    decimalToBinary(n);
    printf("\n");
    return 0;
}