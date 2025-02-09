#include <stdio.h>
int main(){
    char signal;
    scanf("%c",&signal);

    if(signal == 'R'){
        printf("Stop\n");
    }
    else if(signal == 'G'){
        printf("Go\n");
    }
    else if(signal == 'Y'){
        printf("Slow Down");
    }
    else{
        printf("Invalid input");
    }
    return 0;
}