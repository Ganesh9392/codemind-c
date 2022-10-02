#include<stdio.h>
int main(){
    int n,t1,t2,t3;
    scanf("%d",&n);
    if (n==0){
        printf("True");
    }
    else{
        t1=n-1;
        t2=n-2;
        t3=n-3;
        if (t1%10==0)
        printf("True");
        else if (t2%10==0)
        printf("True");
        else if(t3%10==0)
        printf("True");
        else
        printf("False");
    }
    
}