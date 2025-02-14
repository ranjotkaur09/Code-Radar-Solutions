#include <stdio.h>
#include <math.h>

int isSquare(int num1, int num2) {
    int square = num1 * num1;
    if (num2 == square) {
        return 1;  
    }
    return 0;  
}

int main() {
    int num1, num2;
    scanf("%d", &num1);
    scanf("%d", &num2);

    if (isSquare(num1, num2)) {
        printf("Yes\n", num2, num1);
    } else {
        printf("No\n", num2, num1);
    }

    return 0;
}
