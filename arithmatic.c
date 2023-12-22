#include<stdio.h>

int addition ()
{
  printf("Input two number for addition\n");
  int n1, n2;
  scanf("%d %d",&n1,&n2);
  int sum = n1+n2;
  return sum;
}

int subtraction ()
{
  printf("Input two number for subtraction\n");
  int n1, n2;
  scanf("%d %d",&n1,&n2);
  int prod = n1 - n2;
  return prod;
}

int multiplication ()
{
  printf("Input two number for multiplication\n");
  int n1, n2;
  scanf("%d %d",&n1,&n2);
  int prod = n1*n2;
  return prod;
}

int main()
{
  printf("What operation do you want to perform \n 1. Addition \n 2. Subtraction \n 3. Multiplication\n");
  int option, result;
  scanf("%d",&option);
  
  switch(option)
  { case 1 : result = addition();
  	     printf("the result of above mentioned operation is : %d\n", result);
                      break;
    case 2 : result = subtraction();
             printf("the result of above mentioned operation is : %d\n", result);
                      break;
    case 3 : result = multiplication();
             printf("the result of above mentioned operation is : %d\n", result);
                      break;
    default : printf("Please enter valid options to perfrom the operations (1-3 \n)");
  }
  
   
}
