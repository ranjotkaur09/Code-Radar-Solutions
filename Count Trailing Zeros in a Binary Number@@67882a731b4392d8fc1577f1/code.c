#include <stdio.h>

int countTrallingZeros(int n){
    int count =0;
    while ((n&1)==0 && n!=0){
        count++;
        n>>=1;
    }
    return count;
}

int main(){
    int n;
    scanf("%d",&n);
    printf("%d\n",countTrallingZeros(n));
    return 0;
}