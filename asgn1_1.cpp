
#include<stdio.h>
int main()

{
    int n,i;
scanf("%d",&n);
for(i=2000;i>1;i--){
       if(i==2000||i==500||i==200||i==100||i==50||i==20||i==5||i==2){
        printf("%d=%d\n",i,n/i);
        n=n%i;
       }
        else{
            continue;
            }
    } 
  
   return 0;
}

