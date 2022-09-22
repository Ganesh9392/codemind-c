#include<stdio.h>
int main(){
    int n,d,t=0;
    scanf("%d",&n);
    while (n>0){
        d=n%10;
        n=n/10;
        if(d>t){
        t=d;
        }
    }
    printf("%d",t);
}