#include<stdio.h>
#include<stdlib.h>
int main()
{
    char name[50],ch;
    FILE *fp;
    printf("\n Enter New File Name:");
    scanf("%[^\n]",name);
    fp=fopen(name,"a+");
    if(fp==NULL)
    {
        printf("\n Fail to create a File\n");
        exit(1);
    }
    printf("\n File Created Sucessfully \n");
    printf("\n Enter data into File & press\"ctrl+D\"to end\n");
    while((ch=getchar())!=EOF)
        putc(ch,fp);

        printf("\n\nData in File \n");
        while((ch==getc(fp))!=EOF)
            putchar(ch);
            fclose(fp);
}