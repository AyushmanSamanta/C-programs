#include<stdio.h>
#include<string.h>
#include "grade.h"
int main()
{
    int p, c, m, b, e, total;
    float a;
    char name[30];
    int s;
    printf("Enter your name: ");
    scanf("%s", &name);
    printf("Enter your roll number: ");
    scanf("%d", &s);
    printf("Enter your PHYSICS mark: ");
    scanf("%d", &p);
    printf("Enter your CHEMISTRY mark: ");
    scanf("%d", &c);
    printf("Enter your MATH mark: ");
    scanf("%d", &m);
    printf("Enter your BIO mark: ");
    scanf("%d", &b);
    printf("Enter your ENGLISH mark: ");
    scanf("%d", &e);
    total = p+c+m+b+e;
    printf("\n");
    printf("\n***********-----MARKSHEET SHOWN BELOW------************\n");
    printf("\nYour NAME is: %s\n", name);
    printf(" Your ROLL number is: %d\n", s);
    printf(" Grade in PHYSICS\n", phy(p));
    printf(" Grade in CHEMISTRY\n", chem(c));
    printf(" Grade in MATH\n", math(m));
    printf(" Grade in BIO\n", Bio(b));
    printf(" Grade in ENGLISH\n", English(e));
    printf("\n");
    printf("Your total mark is:%d out of 500", total);
    printf("\nYour total percentage is:%f", a = (total)*0.2);
    printf("\n");
    printf("X---------------------X-------------------X\n");
    printf("\n");
    printf("#########----------HERE IS THE GRADE SYSTEM------------#########\n");
    printf("\n");
    printf("GRADE\tMARK\n------X-------\nO\t91-100\nA\t81-90\nB\t71-80\nC\t61-70\nD\t51-60\nE\t34-50\nFAIL\t0-33");
    return 0;
}
