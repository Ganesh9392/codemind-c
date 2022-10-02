#include<stdio.h>
int main(){
    int n,d,r=0,t=1;
    scanf("%d",&n);
    if (n<0){
    t=-1;
    n=n*(-1);
    }
    while (n>0){
        d=n%10;
        r=(r*10)+d;
        n=n/10;
    }
    printf("%d",(t*r));
}