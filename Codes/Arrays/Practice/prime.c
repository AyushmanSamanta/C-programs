#include <stdio.h>
int main()
{
    int arr[10], n, flag = 0, p[10], t = 0, i;
    printf("enter how many elemnts you want: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("enter element %d:\n", i + 1);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("the element %d is: %d\n", i + 1, arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        flag = 0;
        for (int j = 2; j < arr[i]; j++)
        {
            if (arr[i] % j == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            p[t] = arr[i];
            t++;
        }
    }
    printf("\n prime numbers which are present in the array are given below-->\n");
    for (int i = 0; i < t; i++)
    {
        printf("\t%d", p[i]);
    }
    return 0;
}
