#include<stdio.h>
int main(){
    int num,n,t,d,r;
    scanf("%d",&num);
    for(int i=0;i<num;i++){
        scanf("%d",&n);
        t=n;
        r=0;
        while(n>0){
            d=n%10;
            n=n/10;
            r=(r*10)+d;
        }
        if(r==t)
        printf("True
");
        else
        printf("False
");
    }
}