#include<stdio.h>
//Function having same name ,same number of arguments but order
//of arguments are different

float sum(float n1,int  n2) // sum@@float, int
{
	return n1+n2;
}
float sum(int n1, float n2) // sum@@int, float
{
	return n1+n2;
}

int main(void)
{
	float result=0;
	result= sum(10.20f, 20);  // sum@@float, int
	printf("\n sum@float, int =%.2f", result);

	result= sum(20, 10.20f);  // sum@@int,float
	printf("\n sum@int,float =%.2f", result);

	return 0;

}
