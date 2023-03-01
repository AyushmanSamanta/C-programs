#include<stdio.h>
#define MAXROW 10
#define MAXCOL 10
int main()
{
    int x[MAXROW][MAXCOL];
    int r,c,i,j;
    printf("Enter the rows: ");
    scanf("%d",&r);
    printf("Enter the columns:");
    scanf("%d",&c);
    printf("Enter the Matrix:\n ");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("Enter elements[%d,%d]:",i+1,j+1);
            scanf("%d",&x[i][j]);
        }
    }
    if(r==c)
    {
        for(i=0;i<c;i++)
        {
            for(j=0;j<r;j++)
            {
                if(i==j)
                printf("%d\t",x[j][i]);
                else
                printf("\t");
            }
            printf("\n");
        }
    }
    else
    {
    printf("\n Matrix is not a square matrix");
    }
    return 0;
}