#include<stdio.h>
#include<stdlib.h>
int main()
{
    char name[50],ch;
    FILE *fp;
    printf("\n Enter New File Name:");
    scanf("%[^\n]",name);
    fp=fopen(name,"w+");
    if(fp==NULL)
    {
        printf("\n Fail to create a File\n");
        exit(1);
    }
    printf("\n File Created Sucessfully \n");
    printf("\n Enter data into File & press\"ctrl+D\"to end\n");
    while((ch=getchar())!=EOF)
        putc(ch,fp);

        fseek(fp,20,SEEK_CUR);

        printf("\n\n Data in File \n");
        while((ch==getc(fp))!=EOF)
            putchar(ch);
            fclose(fp);
}