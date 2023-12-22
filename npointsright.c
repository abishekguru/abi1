//rotate n points
#include<stdio.h>
#include<stdlib.h>
int main()
{
  int n;
   int ne,t;
  printf("enter number of elements");
  scanf("%d",&ne);
  int a[ne];
  printf("enter the elements");
  for(int i =0;i<ne;i++)
  	scanf("%d",&a[i]);
  for(int i =0;i<ne;i++)
  	printf("%d  ",a[i]);
  printf("enter the N point");
  scanf("%d",&n);
   if(n==0)
    {
    	printf("Output\n");
       for(int i=0;i<ne;i++)
  	 printf("%d  ",a[i]);
  	 exit(0);
    }
   if(n>ne)
     ne = ne%n;
    int p = 1;
    while (p <= n) 
    {
        int t = a[ne-1];
        for (int i = ne; i > 0; i--) 
        {
            a[i] = a[i-1];
        }
        a[0] = t;
        p++;
    }
   printf("output");
   for(int i=0;i<ne;i++)
  	printf("%d  ",a[i]);
}
