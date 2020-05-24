#include<stdio.h>
#pragma pack(1) // struct member allignement equal to 1
struct emp
{
	// variables or data member
	int empno;
	char name[10];
	float sal;
};
int MenuChoices();
void AcceptEmpInof(struct emp *e); // e = 4 bytes
//void PrintEmpInof(struct emp e); // e= 18 bytes
void PrintEmpInof(const struct emp *e); // e= 4 bytes
void SetSalary(struct emp *e,float salary);
float GetSalary(const struct emp *e);
int main(void)
{

	int choice;
	float newsal;
	struct emp e1={100};

	do
	{
		choice= MenuChoices();

		switch(choice)
		{
			default : //
					printf("\n invalid operator");
					continue;//break;
			case 0:
					return 0; // exit(0);

			case 1 : // accept emp info
					printf("\n Enter Emp Info :: \n ");
					AcceptEmpInof(&e1);
					break;
			case 2: // print emp info
					printf("\n EmpInfo :: \n");
					PrintEmpInof(&e1);
					break;
			case 3: // update salary
					printf("\n Enter New salary :: ");
					scanf("%f", &newsal);

					SetSalary(&e1, newsal); // update sal to newsal
					break;
			case 4: // print new sal
					newsal = GetSalary(&e1);
					printf("\n updated sal (new) =%.2f", newsal);
					printf("\n updated sal (new) =%.2f", GetSalary(&e1));

					printf("\n EmpInfo :: updated sal \n");
					PrintEmpInof(&e1);
					break;
		}
		printf("\n Enter 1 to contiue or 0 to exit :: ");
		scanf("%d", &choice);

	}while(choice!=0);
	return 0;

}
void AcceptEmpInof(struct emp *e)
{
	printf("\n Enter EmpNo :: ");
	scanf("%d", &e->empno);

	printf("\n Enter EmpName :: ");
	scanf("%s", e->name);

	printf("\n Enter Emp sal :: ");
	scanf("%f", &e->sal);

	return;
}
void PrintEmpInof(const struct emp *e)
{
//	e->sal=-10000;
	printf("\n EmpNo     Name    sal  using struct variable\n ");
	printf("%-8d %-10s%-8.2f ", e->empno, e->name, e->sal);
	return;
}

void SetSalary(struct emp *e,float salary)
{
	e->sal=salary;
	return;
}

float GetSalary(const struct emp *e)
{
	return e->sal;
}
int MenuChoices()
{
	int choice;
	printf("\n 1. Accept Emp Info \n 2. Print Emp Info ");
	printf("\n 3. update salary \n 4. Print Salary \n ");
	printf("\n Enter Your choice:: ");
	scanf("%d", &choice);
	return choice;
}
