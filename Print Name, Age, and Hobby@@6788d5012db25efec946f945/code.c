#include <stdio.h>
int main(){
    char a[100];
    int b;
    char c[100];
    scanf("%s %d %s\n",a,&b,c);
    printf("Name: %s\n"c);
    printf("Age: %d\n",a);
    printf("Hobby: %s",c);
    return 0;
}