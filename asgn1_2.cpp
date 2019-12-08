#include <iostream>
int main()
{
 float a,b;
 char fun;
 scanf("%f%c%f",&a,&fun,&b);
 if(fun=='+'){
     printf("%.0f",a+b);
 }
 else if(fun=='-'){
     printf("%.0f",a-b);
 }
 else if(fun=='*'){
     printf("%.0f",a*b);
 }
 else if(fun=='/'&&b!=0){
     printf("%.3f",a/b);
 }
 else if(fun=='/'&&b==0){
     printf("Invalid calculation");
 }
 else{
     printf("Invalid Calculation");
 }
   
   return 0;
}
