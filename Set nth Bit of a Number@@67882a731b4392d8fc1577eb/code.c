#include <stdio.h>

int setNthBit(int num, int n){
    return num(1<<n);
}

int main(){
    int n, num;

    printf("Enter a number: ");
    scanf("%d",&num);
    printf("Enter the bit position to set (0- based index): ");
    scanf("%d",&n);
    printf("New number after setting bit %d: %d\n",n,setNthBit(num,n));

    return 0;
}