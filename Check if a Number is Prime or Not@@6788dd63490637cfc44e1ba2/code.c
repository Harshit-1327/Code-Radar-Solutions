#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for (a>0){
        for (!(a%2==0) && !(a%3==0)){
    printf("Prime");}
    }
    return 0;
}