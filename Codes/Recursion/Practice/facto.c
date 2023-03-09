#include<stdio.h>
long int fact(int n);
long int Ifact(int n);
int main(void)
{
	int num;
	printf("Enter a number : ");
	scanf("%d", &num);
	if(num<0)
		printf("No factorial for negative number\n");
	else
		printf("Factorial of %d is %ld\n", num, fact(num) );

	if(num<0)
		printf("No factorial for negative number\n");
	else
		printf("Factorial of %d is %ld\n", num, Ifact(num) );
	return 0;
}

long int fact(int n)
{
	if(n==0)
		return 1;
	return(n*fact(n-1));
}

long int Ifact(int n)
{
	long fact=1;
	while(n>0)
	{
		fact=fact*n;
		n--;
	}
	return fact;
}
