#include <stdio.h>
int main(){
    int n,t,d,x=0;
    scanf("%d",&n);
    t=n;
    while (n>0){
        d=n%10;
        x=x*10+d;
        n=n/10;
    }
if(x==t)
printf("True");
else
printf("False");
}