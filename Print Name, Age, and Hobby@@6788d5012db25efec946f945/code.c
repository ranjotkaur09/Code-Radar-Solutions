#include <stdio.h>
int main(){
    char a[10],b[10];
    int c;
    scanf("%s %d %s", &a,&c,&b);

    printf("Name: %s\n",a);
    printf("Age: %d\n",c);
    printf("Hobby: %s\n",b);
    return 0;
}