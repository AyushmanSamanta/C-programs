#include<stdio.h>
#include<string.h>

#define EVEN(n)\
	if(n%2==0){\
		printf("\n Even \n");\
	}\
		else\
		{\
			printf("\n odd \n");\
		}

		int main()
		{
			int a=11;
			EVEN(a);
		}
