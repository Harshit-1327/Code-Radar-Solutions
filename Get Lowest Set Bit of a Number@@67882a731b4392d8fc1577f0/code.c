#include<stdio.h>
int main(){
    int a,pos=0;
    scanf("%d",&a);
    while((a&1)==0){
        a>>1;
        pos++;
    }
    printf("%d\n",pos);
    return 0;
}