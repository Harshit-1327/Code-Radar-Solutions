#include<stdio.h>
int main(){
    int a,count=0;
    scanf("%d",&a);
    while((n&(1<<31))==0&&count<32){
        n<<=1;
        count++;
    }
    printf("%d",count);
    return 0;
}