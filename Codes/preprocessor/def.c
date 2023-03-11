#include<stdio.h>
#define MAX 10
#define MIN 20

int main()
{
#if MAX
#ifdef MIN
#if(MAX>0 && MIN>0)
	printf("\n positive number\n");
#else
	printf("\n Negative number\n");
#endif
#else
	printf("\n Error:MIN not defined\n");
#endif
#else
	printf("\n Error:MAX not defined\n");
#endif
}
