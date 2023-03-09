#include<stdio.h>
#include<string.h>
struct in_game
{
    int ig_id;
    char ig_name[10];
}ig;
struct out_game
{
    int og_id;
    char og_name[10];
}og;
struct player 
{
    int pid;
    char pname[30];
    int age;
    union games
    {
        struct in_game ig;
        struct out_game og;
        
    }game;
};
int main()
{
    struct player p1;
    int c;
    printf("Enter 1 for indoor games and 2 for outdoor games\n");
    scanf("%d",&c);

    if (c==1)
    {
        printf("You chose Indoor Games\n Please enter your details\n");
        printf("Your id:");
        scanf("%d",&p1.pid);
        printf("Your name:");
        scanf("%s",&p1.pname);
        printf("Your age:");
        scanf("%d",&p1.age);
        printf("Your Game id:");
        scanf("%d",&p1.game.ig.ig_id);
        printf("Your Game name:");
        scanf("%s",&p1.game.ig.ig_name);
    }
    else
    {
        printf("You chose Outdoor Games\n Please enter your details\n");
        printf("Your id:");
        scanf("%d",&p1.pid);
        printf("Your name:");
        scanf("%s",&p1.pname);
        printf("Your age:");
        scanf("%d",&p1.age);
        printf("Your Game id:");
        scanf("%d",&p1.game.og.og_id);
        printf("Your Game name:");
        scanf("%s",&p1.game.og.og_name);
    }

    printf("\nYour details are\n");
    if (c==1)
        printf("\n Player ID=%d\n Player Name:%s\n Player Age:%d\n Indoor Game ID=%d\n Indoor Game=%s\n",p1.pid,p1.pname,p1.age,p1.game.ig.ig_id,p1.game.ig.ig_name);
    else
        printf("\n Player ID=%d\n Player Name:%s\n Player Age:%d\n Outdoor Game ID=%d\n Outdoor Game=%s\n",p1.pid,p1.pname,p1.age,p1.game.og.og_id,p1.game.og.og_name);
}
