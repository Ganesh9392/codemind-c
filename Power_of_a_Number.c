#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c,t;
    scanf("%d %d %d",&a,&b,&c);
    t=pow(a,b);
    printf("%d",t%c);
}