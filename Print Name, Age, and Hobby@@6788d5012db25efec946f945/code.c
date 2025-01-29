#include <stdio.h>
int main(){
    char a[10],b[10];
    int c;
    scanf("%s %d %s", &a,&b,&c);

    printf("Name: %s\n",a);
    printf("Age: %d\n",b);
    printf("Hobby: %s\n",c);
    return 0;
}