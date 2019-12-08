#include <iostream>

using namespace std;
int main(){
    int a,reva=0,rem,b,revb=0;
    scanf("%d %d",&a,&b);
    while(a!=0){
        rem=a%10;
        reva=reva*10+rem;
        a=a/10;
    }
    while(b!=0){
        rem=b%10;
        revb=revb*10+rem;
        b=b/10;
    }
    if(reva%2==0&&revb%2==0){
        printf("%d",reva+revb);
    }
    else if(reva%2==0||revb%2==0){
        printf("%d",a+b);
    }
    else{
        printf("%d",reva*revb);
    }
    
    return 0;
}
    