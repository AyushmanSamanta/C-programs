#include <stdio.h>
struct out_game
{
    int code;
    char name[20];
    char ground[20];
} og;

struct in_game
{
    int code;
    char name[20];
} ig;
typedef struct
{
    int id;
    char name[20];
    int age;
    char mode_game;

    union
    {
        struct out_game og;
        struct in_game ig;
    }gaming;
} player;

int main()
{
    int i, n;
    player ply[20];
    printf("\n Enter the total players:\n");
    scanf("%d", &n);
    printf("\n Enter player details\n");
    for (i = 0; i < n; i++)
    {
        printf("\n Enter the player Id:\n");
        scanf("%d", &ply[i].id);
        printf("\n Enter player Name:\n");
        scanf("%s", ply[i].name);
        printf("\n Enter Age:\n");
        scanf("%d", &ply[i].age);
        printf("\n Enter your Choice of Gaming Mode: \n");
        scanf(" %c", &ply[i].mode_game);

        if (ply[i].mode_game == 'I')
        {
            printf("\n WELCOME TO INDOOR GAMES \n");
            printf("\n PLEASE COMPLETE THE BELOW FORMALITIES \n");
            printf("\n Enter game code:\n");
            scanf("%d", &ply[i].gaming.ig.code);
            printf("\n Enter game Name:\n");
            scanf("%s", ply[i].gaming.ig.name);
       }
        else
       {
            printf("\n WELCOME TO OUTDOOR GAMES \n");
            printf("\n PLEASE COMPLETE THE BELOW FORMALITIES \n");
            printf("\n Enter game code:\n");
            scanf("%d", &ply[i].gaming.og.code);
            printf("\n Enter game Name:\n");
            scanf("%s", ply[i].gaming.og.name);
            printf("\n Enter Ground Name:\n");
            scanf("%s", ply[i].gaming.og.ground);
       }
    }
   for (i = 0; i < n; i++)
    {
        printf("\n Player Details are \n");
        printf("\n Id %d \n Name %s \n Age %d \n ", ply[i].id, ply[i].name, ply[i].age);
        printf("-----------------------------\n");

        if (ply[i].mode_game == 'I')
        {
            printf("\n Details of Indoor Game is:-\n");
            printf("\n Game Code=%d \n Game Name=%s \n", ply[i].gaming.ig.code, ply[i].gaming.ig.name);
        }
        else
        {
            printf("\n Details of outdoor Game is:-\n");
            printf("\n Game Code=%d \n Game Name=%s \n Ground Name=%s\n", ply[i].gaming.og.code, ply[i].gaming.og.name, ply[i].gaming.og.ground);
        }
    }

    printf("\n");
}
