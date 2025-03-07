#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    printf("%d\n",__builtin_ctz(n));
    return 0;
}