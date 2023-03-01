#include<stdio.h>
void display(long int n);
void Rdisplay(long int n);
int sumdigits( long int n);
int main(void)
{
	long int num;
	printf("Enter number : ");
	scanf("%ld", &num);
	printf("%d\n",sumdigits(num));
	printf("\n");
	display(num); 
	printf("\n");
	Rdisplay(num); 
	printf("\n");
	return 0;
}

int sumdigits(long int n)
{
	if(n/10==0) 
		return n;
	return n%10 + sumdigits(n/10);		
}

void display(long int n)
{
	if(n/10==0)
	{
		printf("%d",n);
		return;
	}
	display(n/10);
	printf("%d",n%10);	
}

void Rdisplay(long int n)
{
	if(n/10==0)
	{
		printf("%d",n);
		return;
	}
	printf("%d",n%10);
	Rdisplay(n/10);
}
