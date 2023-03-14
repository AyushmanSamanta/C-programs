#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct employee{
    int id;
    char name[20];
    int age;
    char gender[10];
    char department[20];
    float salary;
};

struct employee emp[20];
char password[] = "password";

int count = 0;

void addEmployee(){
    printf("\nEnter Employee Details:\n");
    printf("Employee ID: ");
    scanf("%d", &emp[count].id);
    printf("Name: ");
    scanf("%s", emp[count].name);
    printf("Age: ");
    scanf("%d", &emp[count].age);
    printf("Gender: ");
    scanf("%s", emp[count].gender);
    printf("Department: ");
    scanf("%s", emp[count].department);
    printf("Salary: ");
    scanf("%f", &emp[count].salary);
    count++;
}

void viewEmployee(){
    int i;
    printf("\nEmployee Details:\n");
    printf("ID\tName\t\tAge\tGender\t\tDepartment\t\tSalary\n");
    for(i = 0; i < count; i++){
        printf("%d\t%s\t%d\t%s\t\t%s\t\t\t%.2f\n", emp[i].id, emp[i].name, emp[i].age, emp[i].gender, emp[i].department, emp[i].salary);
    }
}

void searchEmployee(){
    int id, i, flag = 0;
    printf("\nEnter Employee ID to search: ");
    scanf("%d", &id);
    for(i = 0; i < count; i++){
        if(emp[i].id == id){
            printf("\nEmployee Found:\n");
           printf("ID\tName\t\tAge\tGender\t\tDepartment\t\tSalary\n");
            printf("%d\t%s\t%d\t%s\t\t%s\t\t\t%.2f\n", emp[i].id, emp[i].name, emp[i].age, emp[i].gender, emp[i].department, emp[i].salary);
            flag = 1;
            break;
        }
    }
    if(flag == 0){
        printf("\nEmployee Not Found!\n");
    }
}

void deleteEmployee(){
    int id, i, j, flag = 0;
    printf("\nEnter Employee ID to delete: ");
    scanf("%d", &id);
    for(i = 0; i < count; i++){
        if(emp[i].id == id){
            for(j = i; j < count - 1; j++){
                emp[j] = emp[j+1];
            }
            count--;
            flag = 1;
            break;
        }
    }
    if(flag == 0){
        printf("\nEmployee Not Found!\n");
    }
    else{
        printf("\nEmployee Deleted!\n");
    }
}

int main()
{
    char input_password[20];
    printf("Enter the password to access the system: ");
    scanf("%s", input_password);
    
    if (strcmp(input_password, password) == 0) 
    {
    int choice;
    do
    {
        printf("\nEmployee Management System\n");
        printf("1. Add Employee\n");
        printf("2. View Employee\n");
        printf("3. Search Employee\n");
        printf("4. Delete Employee\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                addEmployee();
                break;
            case 2:
                viewEmployee();
                break;
            case 3:
                searchEmployee();
                break;
            case 4:
                deleteEmployee();
                break;
            case 0:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Try again.\n");
                break;
        }
    }while (choice);
}else{
        printf("\nIncorrect password.\n Access denied.\n");
    }
    return 0;
}
