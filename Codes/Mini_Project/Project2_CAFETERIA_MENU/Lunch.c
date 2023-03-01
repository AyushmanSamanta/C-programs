#include<stdio.h>

int lunch(int total)
{
    int amount, c;
    main:
    printf("You are inside the lunch section!!!\n");
    printf("---------ITEM LIST--------");
    printf("\n1. RICE\n2. DAL\n3. MIX CURRY\n4. CHICKEN CURRY\n5. PAMPAD");
    printf("\n");
    printf("\nChoose your dish: ");
    scanf("%d", &c);
    printf("\nEnter your amount you want: ");
    scanf("%d", &amount);
    switch(c)
    {
        case 1:
        printf("you have choosen RICE.");
        printf("\n\n-------BILL--------");
        printf("\nRICE per plate RS.20");
        total = amount*20;
        printf("\nYour total cost of %d plate RICE is:%d", amount, total);
        break;
        
        case 2:
        printf("you have choosen DAL.");
        printf("\n\n-------BILL--------");
        printf("\nDAL per plate RS.10");
        total = amount*10;
        printf("\nYour total cost of %d plate DAL is:%d", amount, total);
        break;

        case 3:
        printf("you have choosen MIX CURRY.");
        printf("\n\n-------BILL--------");
        printf("\nMIX CURRY per plate RS.30");
        total = amount*30;
        printf("\nYour total cost of %d plate MIX CURRY is:%d", amount, total);
        break;

        case 4:
        printf("you have choosen CHICKEN CURRY.");
        printf("\n\n-------BILL--------");
        printf("\nCHICKEN CUURY per plate RS.60");
        total = amount*60;
        printf("\nYour total cost of %d plate CHICKEN CURRY is:%d", amount, total);
        break;

        case 5:
        printf("you have choosen PAMPAD.");
        printf("\n\n-------BILL--------");
        printf("\nPAMPAD per piece RS.5");
        total = amount*5;
        printf("\nYour total cost of %d piece PAMPAD is:%d", amount, total);
        break;

        default:
        printf("\nyou have choosen invalid serial number!\n");
        goto main;
        break;
    }
}
