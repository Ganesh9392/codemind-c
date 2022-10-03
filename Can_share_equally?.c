#include<stdio.h>
int main(){
    int a,b,t1,t2;
    scanf("%d %d",&a,&b);
    t1=a*1;
    t2=b*2;
   // printf("%d
%d
",a,b);
    if (b%2==1 and a==0)
    printf("NO");
    else if((t1+t2)%2==0)
    printf("YES");
    else
    printf("NO");
}