#include<stdio.h>
int Factorial(int,int *);
int main()
{
  int i,fact,num;
 
  printf("Enter a number: ");
  scanf("%d",&num);
 
  Factorial(num,&fact);
  printf("Factorial of %d is: %d",num,fact);
 
  return 0;
}
 
int Factorial(int num,int *fact)
{
    int i;
 
    *fact =1;
 
    for(i=1;i<=num;i++)
    *fact=*fact*i;
}
