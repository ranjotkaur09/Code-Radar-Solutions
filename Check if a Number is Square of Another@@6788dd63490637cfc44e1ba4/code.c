#include <stdio.h>
int main(void)
{
    double x;

    double sq;

    scanf("%lf",&x);

    sq = sqrt(x); 

    if( sq == (int)sq ){
       printf("Yes\n"); 
    }
    else{
        printf("No\n");
    }
    return 0;
}