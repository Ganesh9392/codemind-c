#include<stdio.h>
#include<math.h>
int main(){
    int num,n,t;
    scanf("%d",&num);
    for(int i=0;i<num;i++){
        scanf("%d",&n);
        //printf("%d
",n);
        t=pow(n,0.5);
        if(n%t==0)
        printf("True
");
        else
        printf("False
");
        
    }
}