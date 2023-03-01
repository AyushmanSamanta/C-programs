#include<stdio.h>
int main()
{
    int intType;
    int shortType;
    int longType;
    float floatType;
    char charType;
    char signedType;
    char unsignedType;
    double doubleType;
   
    printf("The size of int :%d\n",sizeof(intType));
    printf("The size of int :%d\n",sizeof(shortType));
    printf("The size of int :%d\n",sizeof(longType));
    printf("The size of float :%d\n",sizeof(floatType));
    printf("The size of char :%d\n",sizeof(charType));
    printf("The size of char :%d\n",sizeof(signedType));
    printf("The size of char :%d\n",sizeof(unsignedType));
    printf("The size of double :%d\n",sizeof(doubleType));
    return 0;
}