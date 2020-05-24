#include<stdio.h>
//Function having same name and same number of arguments but
//differs in type of arguments

int sum(int n1, int n2) // sum@@int, int
{
	return n1+n2;
}
float sum(int n1, float n2) // sum@@int, float
{
	return n1+n2;
}

int main(void)
{
	int result=0;
	float result1=0;
	result= sum(10, 20);  // sum@@int, int
	printf("\n sum@int, int =%d", result);

	result1= sum(10, 40.2f);  // sum@@int,float
	printf("\n sum@int,float =%.2f", result1);

	return 0;

}
