#include <stdio.h>

int main() {
    float temperature;
    scanf("%f", &temperature);

    if (temperature <= 0) {
        printf("Freezing.\n");
    } else {
        printf("Above freezing.\n");
    }

    return 0;
}