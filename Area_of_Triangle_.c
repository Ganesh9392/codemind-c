#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c,s,s1;
    scanf("%f %f %f",&a,&b,&c);
    s=(a+b+c)/2;
    s1=s*(s-a)*(s-b)*(s-c);
    printf("%.2f",pow(s1,0.5));
}