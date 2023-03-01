#include<stdio.h>
int main()
{
   int a[5];
   int i, sum=0;
   int *p;

   printf("\n Enter array elements:\n");
   for(i=0;i<5;i++)
    scanf("%d",&a[i]);
    p = a;
    for(i=0;i<5;i++) 
    {
        sum = sum + *p;
        p++;
    }
    printf("\n The sum is: %d\n",sum);
}
