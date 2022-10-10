#include<stdio.h>
int main(){
    int n,l[50],ec=0,oc=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&l[i]);
    }
    for (int j=0;j<n;j++){
        if(l[j]%2==0)
        ec+=1;
        else
        oc+=1;
    }
    printf("%d ",ec);
    printf("%d",oc);
    
}