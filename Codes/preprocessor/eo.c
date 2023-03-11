#include<stdio.h>
int main()
{
#if defined EVEN
	int a=10,b=20;
#elif defined ODD
	int a=11,b=21;
#else 
	int a=0,b=0;
#endif
	printf("/n sum of two numbers:%d",a+b);
}
