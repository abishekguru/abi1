//swapping the value of two variable with each other
#include<stdio.h>
int main()
{
 int a,b;
 printf("enter two numbers");
 scanf("%d",&a);
 scanf("%d",&b);
 printf("A: %d B: %d \n",a,b);
// a = a+b;
// b = a-b;
// a = a-b;
  a = a ^ b;
  b = (~a) ^ (~b);
  a = a ^ b ;
 printf("A: %d B: %d\n",a,b);
}

