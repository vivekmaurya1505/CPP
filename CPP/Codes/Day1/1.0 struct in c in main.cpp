#include<stdio.h>
#pragma pack(1) // struct member allignement equal to 1
struct emp
{
	// variables or data member
	int empno;
	char name[10];
	float sal;
};
// to remove slack bytes use #pragma pack(1)
int main(void)
{
	struct emp e1={100};
	struct emp *ptr=&e1;

	printf("sizeof e1=%d",sizeof(e1));
	printf("\n ptr=%u ptr+1=%u", ptr, ptr+1);
	printf("\n &e1=%u &e1+1=%u", &e1, &e1+1);


	printf("\n EmpNo     Name    sal \n ");
	printf("%-8d %-10s%-8.2f ", e1.empno, e1.name, e1.sal);


	printf("\n Enter EmpNo :: ");
	scanf("%d", &e1.empno);

	printf("\n Enter EmpName :: ");
	scanf("%s", e1.name);

	printf("\n Enter Emp sal :: ");
	scanf("%f", &e1.sal);


	printf("\n EmpNo     Name    sal  using struct variable\n ");
	printf("%-8d %-10s%-8.2f ", e1.empno, e1.name, e1.sal);

	printf("\n EmpNo     Name    sal  using pointer by -> operator \n ");
	printf("%-8d %-10s%-8.2f ", ptr->empno, ptr->name, ptr->sal);

	printf("\n EmpNo     Name    sal  using pointer by . operator \n ");
	printf("%-8d %-10s%-8.2f ", (*ptr).empno, (*ptr).name, (*ptr).sal);



	return 0;
}
