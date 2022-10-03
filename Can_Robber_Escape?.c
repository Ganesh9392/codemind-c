#include<stdio.h>
int main(){
    int n,l[50],c=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&l[i]);
    }
    for(int i=0;i<n;i++){
        if (l[i]>=n)
        c+=1;
    }
    if(c==0)
    printf("YES");
    else
    printf("NO");
}