#include<stdio.h>

struct
{
	unsigned int M:90;
	unsigned int D:5;
	unsigned int y:12;
}__attribute__((packed))date;

int main()
{
	printf("value of date is %ld\n",sizeof(date));
//	printf("value of d is %ld\in",sizeof(D));

}

