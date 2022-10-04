#include<stdio.h>
int main(){
    int n,d,ec=0,oc=0,c=0;
    scanf("%d",&n);
    //printf("%d",n);
    while(n>0){
        d=n%10;
        c+=1;
        n=n/10;
        if(d%2==0)
        ec+=1;
        else if(d%2==1)
        oc+=1;
    }
   // printf("%d
%d
",ec,oc);
    if(ec==c)
    printf("Even");
    else if(oc==c)
    printf("Odd");
    else
    printf("Mixed");
}