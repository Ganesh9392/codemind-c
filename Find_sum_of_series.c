#include<stdio.h>
int main(){
    float n,s=0;
    float i;
    scanf("%f",&n);
    for(i=1;i<=n;i++){
        s=s+(1/i);
    }
    printf("%.2f",s);
}