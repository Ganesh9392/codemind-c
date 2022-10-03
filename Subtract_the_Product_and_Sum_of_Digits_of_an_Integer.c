#include<stdio.h>
int main(){
    int n,p=1,s=0,d;
    scanf("%d",&n);
    while (n>0){
        d=n%10;
        n=n/10;
        p=p*d;
        s+=d;
    }
    printf("%d",p-s);
}