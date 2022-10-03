#include<stdio.h>
int main(){
    int n,s=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(n%i==0)
        s+=i;
    }
    if(s==n*2)
    printf("True");
    else
    printf("False");
}