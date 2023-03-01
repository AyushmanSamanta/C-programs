#include <stdio.h>
#include <string.h>

struct date
{
    int day;
	int month;
	int year;
};

struct employee 
{
    int id;
    char name[50];
    int age;
    float salary;
    struct date doj;
};

int main()
{
    struct employee emp[100];
    int i, n, choice;
    char emp_name[50];
    printf("***********************************************************************************************************\n");
    printf("***************************************WELCOME TO EMPLOYEE MANAGEMENT********************************\n");
    printf("***********************************************************************************************************\n");

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) 
    {
        printf("Enter Employee Id : ");
        scanf("%d", &emp[i].id);
        printf("Enter employee name: ");
        scanf("%s", &emp[i].name);
        printf("Enter employee age: ");
        scanf("%d", &emp[i].age);
        printf("Enter employee salary: ");
        scanf("%f", &emp[i].salary);
        printf("Enter date of joining(dd/mm/yy) : ");
		scanf("%d/%d/%d", &emp[i].doj.day, &emp[i].doj.month, &emp[i].doj.year);
        

    }

    while (1) 
    {
        printf("\n Enter your choice:\n");
        printf("1. Add Employee\n");
        printf("2. Delete Employee\n");
        printf("3. Display Employee List\n");
        printf("4. Exit\n");
        scanf("%d", &choice);

        switch (choice) 
        {
            case 1:
                printf("Enter Employee Id : ");
                scanf("%d",emp[n].id);
                printf("Enter Employee name: ");
                scanf("%s", emp[n].name);
                printf("Enter Employee age: ");
                scanf("%d", &emp[n].age);
                printf("Enter Employee salary: ");
                scanf("%f", &emp[n].salary);
                printf("Enter date of joining(dd/mm/yy) : ");
		        scanf("%d/%d/%d", &emp[i].doj.day, &emp[i].doj.month, &emp[i].doj.year);
                n++;
                break;
            case 2:
                printf("Enter Employee name to delete: ");
                scanf("%s", emp_name);
                for (i = 0; i < n; i++) {
                    if (strcmp(emp_name, emp[i].name) == 0) 
                    {
                        memmove(&emp[i], &emp[i+1], (n-i-1) * sizeof(struct employee));
                        n--;
                        break;
                    }
                }
                break;
            case 3:
                printf("\nEmployee List:\n");
                for (i = 0; i < n; i++) 
                {
                    printf("Id : %d\n",emp[i].id);
                    printf("Name: %s\n", emp[i].name);
                    printf("Age: %d\n", emp[i].age);
                    printf("Salary: %.2f\n", emp[i].salary);
                    printf("Enter date of joining(dd/mm/yy) : %d / %d / %d\n ",emp[i].doj.day, emp[i].doj.month, emp[i].doj.year);
	            }
                break;
            case 4:
                printf("Exiting Program...\n");
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
                break;
        }
    }

    return 0;
}