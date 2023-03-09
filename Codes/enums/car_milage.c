#include<stdio.h>
int main()
{
    int a,b,cho;
    enum {m800=17,alto=16,baleno=19,swift=20,scross=18};

    printf("\n Menu \n");
    printf("0. m800\n");
    printf("1. alto\n");
    printf("2. baleno\n");
    printf("3. swift\n");
    printf("4. scross\n");
    printf("\n Enter your Choice of Maruti Cars:\n");
    scanf("%d",&cho);

    switch(cho)
    {
        case 0:
            printf("\n Milage is %d\n",m800);
            break;
        case 1:
            printf("\n Milage is %d\n",alto);
            break;
        case 2:
            printf("\n Milage is %d\n",baleno);
            break;
        case 3:
            printf("\n Milage is %d\n",swift);
            break;
        case 4:
            printf("\n Milage is %d\n",scross);
            break;
        default:
            printf("Wrong Choice");
    }
    return 0;

}