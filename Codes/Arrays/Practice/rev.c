#include<stdio.h>
 int main()
 {
    int a,i,j,n,num[10];
    printf("Enter the number of elements:\n");
    scanf("%d",&n);

    printf("Enter the elements:\n");
    for(i=0;i<n;i++)
    scanf("%d",&num[i]);

    printf("Reverse is:");
    for(i=n-1;i>=0;i--)
    {
        printf("%d",num[i]);
    }
    return 0;
 }