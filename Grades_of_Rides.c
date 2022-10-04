#include<stdio.h>
int main(){
    int hu,s,sp,a,b,c;
    scanf("%d %d %d",&hu,&s,&sp);
    a=hu>50;
    b=s>60;
    c=sp>100;
    if(a and b and c)
    printf("10");
    else if(a and b)
    printf("9");
    else if(b and c)
    printf("8");
    else if(a and c)
    printf("7");
    else if(a or b or c)
    printf("6");
    else
    printf("5");
}