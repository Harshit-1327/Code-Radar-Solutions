#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for (int i;i>=a;i++){
        if ((a%2==0)&&(a%3==0)){
            printf("Not Prime");
        }
        else{
            printf("Prime");
        }
    }
    return 0;
}