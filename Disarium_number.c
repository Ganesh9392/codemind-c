#include<stdio.h>
#include<math.h>
int main(){
    int n,d,i,r=0,c=0,d1,rr=0,t,s=0;
    scanf("%d",&n);
   // printf("%d",n);
    t=n;
    r=n;
    while (n!=0){
        d=n%10;
        n=n/10;
        c+=1;
    }
 //   printf("%d",r);
    for(i=c;i>0 ;i--){
       // printf("%d",i);
        d1=r%10;
        //printf("%d",d1);
      //  printf("
");
        s=s+pow(d1,i);
       // printf("%d",rr);
        //printf("
");
        r=r/10;
    }
   // printf("%d",rr);
    if (s==t)
    printf("True");
    else
    printf("False");
}