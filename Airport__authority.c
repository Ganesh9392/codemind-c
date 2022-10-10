#include<stdio.h>
int main(){
    int n,l[50],s=0,t;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&l[i]);
    }
    scanf("%d",&t);
    for(int j=0;j<n;j++){
        if(l[j]>t)
        s+=2;
        else
        s+=1;
    }
    printf("%d",s);
}