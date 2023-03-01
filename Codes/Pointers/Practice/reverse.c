#include<stdio.h>
#define N 6
int main()
{
    int arr[N], i, *p;

    printf("Enter %d numbers\n", N);
    for(i = 0; i < N; i++)
        scanf("%d", &arr[i]);

    p = &arr[N - 1];

    printf("\n Elements of array in reverse order \n");
    for(i = 0; i < N; i++)
        printf("%d\n", *p--);

    return 0;
}
