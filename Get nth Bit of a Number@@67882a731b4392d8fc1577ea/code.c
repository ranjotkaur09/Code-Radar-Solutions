#include <stdio.h>

int getNthBit(int num, int n){
    return(num>>n)& 1;
} 

int main(){
    int num,n;
    
    printf("Enter a number: ");
    scanf("%d",&num);

    printf("Enter the bit position(n): ");
    scanf("%d, &n");

    int bitValue = getNthBit(num,n);
    printf("The value of the %dth bit is; %d\n,n,bitVlaue");
    return 0;

}