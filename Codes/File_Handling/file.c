#include<stdio.h>
#include<stdlib.h>
int main()
{
    char name[50];
    FILE *fp;
    printf("\n Enter New File Name:");
    scanf("%[^\n]",name);
    fp=fopen(name,"w");
    if(fp==NULL)
    {
        printf("\n Fail to create a File\n");
        exit(1);
    }
    printf("\n File Created Sucessfully \n");
}