#include<stdio.h>

struct Employee
{
	int empno;
};

int main()
{
	struct Employee emp={.empno=1};
	printf("the employee number is %d\n",emp.empno);
}


