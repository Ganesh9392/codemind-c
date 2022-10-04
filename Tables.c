#include<stdio.h>
int main(){
    int n1,n2;
    scanf("%d %d",&n1,&n2);
    for(int i=1;i<=n2;i++){
        if(i%2==1)
        printf("%d x %d = %d
",n1,i,n1*i);
    }
}