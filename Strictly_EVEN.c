#include<stdio.h>
int main(){
    int n,f=0;
    scanf("%d",&n);
    int l[n];
    for(int i=0;i<n;i++){
        scanf("%d",&l[i]);
    }
    for(int j=0;j<n;j++){
        if(j%2==0)
        continue;
        else if(l[j]%2==1)
        continue;
        else
        f+=1;
    }
    if(f==1)
    printf("False");
    else
    printf("True");
}