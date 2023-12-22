#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main()
{
  cout<<"Hello world \n how are you";
  int n;
  printf("enter number of names");
  scanf("%d",&n);
  if(n>>3)
    exit(0);
  char a[n][25];
  char t[25];
  printf("Enter the names");
  for(int i=0;i<n;i++)
   cin>>a[i];
  printf("Original list\n");
  for(int i=0;i<n;i++)
   cout<<a[i]<<" ";
   cout<<endl;
  for(int i=0;i<n;i++)
  {
     for(int j=i+1;j<n;j++)
     {
       if(strcmp(a[j],a[i])<0)
        {
           strcpy(t,a[j]);
           strcpy(a[j],a[i]);
           strcpy(a[i],t);
        }
     }
  }
  printf("Sorted name list:\n");
  for(int i=0;i<n;i++)
   cout<<a[i]<<" ";
  cout<<endl;
}

