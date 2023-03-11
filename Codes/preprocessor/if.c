#include<stdio.h>
#define	NUM  8
int main(void)
{
	int a=20,b=4;
	#if  NUM>=3
		printf("Value of NUM is greater than or equal to 3\n");    
		a = a+b;
		b = a*b;	
		printf("Values of variables a and b have been changed\n");
	#endif
	printf("a=%d,b=%d\n",a,b);
	printf("Program completed\n"); 
	return 0;
}
