#include<stdio.h>
int main(){
    int a,b,big,i=2;
    scanf("%d %d",&a,&b);
    if (a>b)
    a,b=b,a;
    big=b;
    while (big % a != 0){
        big = b*i;
        i+=1;
    }
    printf("%d",big);
}