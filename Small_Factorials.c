#include<stdio.h>
int main(){
    int l,n,p=1;
    scanf("%d",&l);
    for(int i=0;i<l;i++){
        p=1;
        scanf("%d",&n);
        for(int j=1;j<=n;j++){
            p=p*j;
        }
        printf("%d
",p);
    }
}