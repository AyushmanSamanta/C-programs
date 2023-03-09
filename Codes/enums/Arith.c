#include<stdio.h>
int main()
{
    int a,b,cho;
    enum {Add,Sub,Mul,Div,Square};

    printf("\n Menu \n");
    printf("0. Add\n");
    printf("1. Sub\n");
    printf("2. Mul\n");
    printf("3. Div\n");
    printf("4. Square\n");
    printf("\n Enter your Choice:\n");
    scanf("%d",&cho);
    printf("Enter Two Numbers:");
    scanf("%d%d",&a,&b);

    switch(cho)
    {
        case 0:
            printf("\n Sum:%d\n",a+b);
            break;
        case 1:
            printf("\n Sub:%d\n",a-b);
            break;
        case 2:
            printf("\n Mul:%d\n",a*b);
            break;
        case 3:
            printf("\n Div:%d\n",(float)a/b);
            break;
        case 4:
            printf("\n Square of a:%d\t Square of b:%d \n",a*a,b*b);
            break;
        default:
            printf("Wrong Choice");
    }
    return 0;

}