#include<stdio.h>

int breakfast(int total)
{
    int amount, c;
    main:
    printf("You are inside the breakfast section!!!\n");
    printf("---------ITEM LIST--------");
    printf("\n1. MAGGIE\n2. DOSA\n3. CHOWMIN\n4. PURI AND SABJI\n5. CHAKULI AND MATTAR\n6. PARATHA DALMA");
    printf("\n");
    printf("\nChoose your dish: ");
    scanf("%d", &c);
    printf("\nEnter your amount you want: ");
    scanf("%d", &amount);
    switch(c)
    {
        case 1:
        printf("you have choosen MAGGIE.");
        printf("\n\n-------BILL--------");
        printf("\nMAGGIE  per plate RS.30");
        total = amount*30;
        printf("\nYour total cost of %d plate MAGGIE is:%d", amount, total);
        break;
        
        case 2:
        printf("you have choosen DOSA.");
        printf("\n\n-------BILL--------");
        printf("\nDOSA per plate RS.35");
        total = amount*35;
        printf("\nYour total cost of %d plate DOSA is:%d", amount, total);
        break;

        case 3:
        printf("you have choosen CHOWMIN.");
        printf("\n\n-------BILL--------");
        printf("\nCHOWMIN per plate RS.20");
        total = amount*20;
        printf("\nYour total cost of %d plate CHOWMIN is:%d", amount, total);
        break;

        case 4:
        printf("you have choosen PURI AND SABJI.");
        printf("\n\n-------BILL--------");
        printf("\nPURI AND SABJI per plate RS.15");
        total = amount*35;
        printf("\nYour total cost of %d plate PURI AND SABJI is:%d", amount, total);
        break;

        case 5:
        printf("you have choosen CHAKULI AND MATTAR.");
        printf("\n\n-------BILL--------");
        printf("\nCHAKULI AND MATTAR per plate RS.15");
        total = amount*30;
        printf("\nYour total cost of %d plate CHAKULI AND MATTAR is:%d", amount, total);
        break;

        case 6:
        printf("you have choosen PARATHA DALMA.");
        printf("\n\n-------BILL--------");
        printf("\nPARATHA DALMA per plate RS.15");
        total = amount*40;
        printf("\nYour total cost of %d plate PARATHA DALMA is:%d", amount, total);
        break;

        default:
        printf("\nyou have choosen invalid serial number!\n");
        goto main;
        break;
    }
}
