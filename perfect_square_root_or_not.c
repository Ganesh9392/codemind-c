#include<stdio.h>
#include<math.h>
int main(){
    int n,t;
    scanf("%d",&n);
    t=pow(n,0.5);
    if(n%t==0)
    printf("True");
    else
    printf("False");
}