#include<stdio.h>
#pragma pack(1) // struct member allignement equal to 1
struct emp
{

	private:
		// variables or data member or fields
		int empno;
		char name[10];
		float sal;
	public:
	// member function or methods
	void AcceptEmpInof()
	{
		printf("\n Enter EmpNo :: ");
		scanf("%d", &empno);

		printf("\n Enter EmpName :: ");
		scanf("%s", name);

		printf("\n Enter Emp sal :: ");
		scanf("%f", &sal);

		return;
	}
	void PrintEmpInof()
	{

		printf("\n EmpNo     Name    sal  using struct variable\n ");
		printf("%-8d %-10s%-8.2f ", empno, name, sal);
		return;
	}

	void SetSalary(float salary)
	{
		sal=salary;
		return;
	}

	float GetSalary()
	{
		return sal;
	}

};
int MenuChoices();
int main(void)
{

	int choice;
	float newsal;
	emp e1;//struct emp e1={100};

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
					e1.AcceptEmpInof();
					//AcceptEmpInof(&e1);
					break;
			case 2: // print emp info
					printf("\n EmpInfo :: \n");
					e1.PrintEmpInof();
					//PrintEmpInof(&e1);
					break;
			case 3: // update salary
					printf("\n Enter New salary :: ");
					scanf("%f", &newsal);

					//SetSalary(&e1, newsal); // update sal to newsal
					e1.SetSalary(newsal);
					break;
			case 4: // print new sal
					//newsal = GetSalary(&e1);
					newsal= e1.GetSalary();
					printf("\n updated sal (new) =%.2f", newsal);
					//printf("\n updated sal (new) =%.2f", GetSalary(&e1));
					printf("\n updated sal (new) =%.2f", e1.GetSalary());

					printf("\n EmpInfo :: updated sal \n");
					e1.PrintEmpInof();
					break;
		}
		printf("\n Enter 1 to contiue or 0 to exit :: ");
		scanf("%d", &choice);

	}while(choice!=0);
	return 0;

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
