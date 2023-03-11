#include<stdio.h>

int dinner(int total)
{
    int amount, c;
    main:
    printf("You are inside the dinner section!!!\n");
    printf("---------ITEM LIST--------");
    printf("\n1. ROTI\n2. DAL\n3. CURRY\n4. MILK");
    printf("\n");
    printf("\nChoose your dish: ");
    scanf("%d", &c);
    printf("\nEnter your amount you want: ");
    scanf("%d", &amount);
    switch(c)
    {
        case 1:
        printf("you have choosen ROTI.");
        printf("\n\n-------BILL--------");
        printf("\nROTI per piece RS.10");
        total = amount*10;
        printf("\nYour total cost of %d piece ROTI is:%d", amount, total);
        break;
        
        case 2:
        printf("you have choosen DAL.");
        printf("\n\n-------BILL--------");
        printf("\nDAL per plate RS.10");
        total = amount*10;
        printf("\nYour total cost of %d plate DAL is:%d", amount, total);
        break;

        case 3:
        printf("you have choosen CURRY.");
        printf("\n\n-------BILL--------");
        printf("\nCURRY per plate RS.30");
        total = amount*30;
        printf("\nYour total cost of %d plate CURRY is:%d", amount, total);
        break;

        case 4:
        printf("you have choosen MILK.");
        printf("\n\n-------BILL--------");
        printf("\nMILK per glass RS.15");
        total = amount*15;
        printf("\nYour total cost of %d glass MILK is:%d", amount, total);
        break;

        default:
        printf("\nyou have choosen invalid serial number!\n");
        goto main;
        break;
    }
}
