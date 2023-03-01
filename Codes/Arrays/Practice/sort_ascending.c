 #include<stdio.h>
 int main()
 {
    int a,i,j,n,num[10];
    printf("Enter the number of elements:\n");
    scanf("%d",&n);

    printf("Enter the elements:\n");
    for(i=0;i<n;i++)
    scanf("%d",&num[i]);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(num[i]>num[j])
            {
                a=num[i];
                num[i]=num[j];
                num[j]=a;
            }
        }
    }
    printf("Ascending order is:\n");
    for(i=0;i<n;i++)
    printf("%d\n",num[i]);
 }