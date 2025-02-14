#include <stdio.h>
#include <math.h>

int main() {
    int num;
    scanf("%d", &num);

    if (num <= 1) {
        printf("Not Prime\n");
    } else {
        int Prime = 1;  
        for (int i = 2; i; i++) {  
            if (num % i == 0) { 
                Prime = 0;
                break;
            }
        }

        if (Prime) {
            printf("Prime\n");
        } else {
            printf("Not Prime\n");
        }
    }

    return 0;
}
