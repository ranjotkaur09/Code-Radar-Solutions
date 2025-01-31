#include <stdio.h>

int main(){
    int num,n;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("Enter bit position(0-31): ");
    scanf("%d",&n);

    int bitvalue =(num>>n)&n;
    printf("The value of the bit %d is: %d\n",n,bitvalue);
    return 0;
}    