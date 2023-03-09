/* How to Allocate memory at runtime*/

#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int *p,n,i;
	printf("Enter the number of integers to be entered :\n ");
	scanf("%d",&n);
	p = (int *)malloc(n*sizeof(int)); 
	if(p==NULL)
	{
		printf("Memory not available\n");
		exit(1);
	}
     printf("Memory Allocated is:%x\n",p);
	for(i=0; i<n; i++)
	{
		printf("Enter an integer :\n ");
		scanf("%d",p+i);
        
	}
	for(i=0; i<n; i++)
		printf("%d\t",*(p+i));
        getchar();
       
	return 0;
}