#include<stdio.h>
int main(){
    int n,s=0,i;
    scanf("%d",&n);
    for (i=1;i<n;i++){
        if(n%i==0)
        s=s+i;
    }
   // printf("%d",s);
    if (s>n)
    printf("True");
    else
    printf("False");
}