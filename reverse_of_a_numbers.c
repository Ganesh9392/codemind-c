#include<stdio.h>
int main(){
    int n,d,x=0;
    scanf("%d",&n);
    while (n>0){
        d=n%10;
        n=n/10;
        x=x*10+d;
    }
    printf("%d",x);
}