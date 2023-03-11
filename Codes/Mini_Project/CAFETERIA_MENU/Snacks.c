#include<stdio.h>

int snacks(int total)
{
    int amount, c;
    main:
    printf("You are inside the snacks section!!!\n");
    printf("---------ITEM LIST--------");
    printf("\n1. BADA\n2. SAMOSA\n3. ALUCHOP\n4. SANDWITCH\n5. MUDHI AND MIXTURE");
    printf("\n");
    printf("\nChoose your dish: ");
    scanf("%d", &c);
    printf("\nEnter your amount you want: ");
    scanf("%d", &amount);
    switch(c)
    {
        case 1:
        printf("you have choosen BADA.");
        printf("\n\n-------BILL--------");
        printf("\nBADA per piece RS.05");
        total = amount*5;
        printf("\nYour total cost of %d piece BADA is:%d", amount, total);
        break;
        
        case 2:
        printf("you have choosen SAMOSA.");
        printf("\n\n-------BILL--------");
        printf("\nSAMOSA per piece RS.05");
        total = amount*5;
        printf("\nYour total cost of %d piece SAMOSA is:%d", amount, total);
        break;

        case 3:
        printf("you have choosen ALUCHOP.");
        printf("\n\n-------BILL--------");
        printf("\nALUCHOP per piece RS.05");
        total = amount*5;
        printf("\nYour total cost of %d piece ALUCHOP is:%d", amount, total);
        break;

        case 4:
        printf("you have choosen SANDWITCH.");
        printf("\n\n-------BILL--------");
        printf("\nSANDWITCH per piece RS.15");
        total = amount*15;
        printf("\nYour total cost of %d piece SANDWITCH is:%d", amount, total);
        break;

        case 5:
        printf("you have choosen MUDHI AND MIXTURE.");
        printf("\n\n-------BILL--------");
        printf("\nMUDHI AND MIXTURE per plate RS.10");
        total = amount*10;
        printf("\nYour total cost of %d plate MUDHI AND MIXTURE is:%d", amount, total);
        break;

        default:
        printf("\nyou have choosen invalid serial number!\n");
        goto main;
        break;
    }
}
