#include<stdio.h>
int main(){
    int n,l[50],s=0,t;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&l[i]);
    }
    t=n/2;
    for(int j=n-1;j>t-1;j--){
        printf("%d ",l[j]);

    }
    n=n/2;
    for(int k=0;k<n;k++){
        printf("%d ",l[k]);
    }
}