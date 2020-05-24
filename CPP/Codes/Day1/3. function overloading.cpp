#include<stdio.h>
//1. bool ---> true/ false  1 byte
//2. wchar_t--> 16 bit char 2 bytes (unicode)
/*int f1(int) // f1@@int
{
	printf("\n inside int block");
}*/

void f1(int) // f1@@int
{
	printf("\n inside int block");
}
void f1(float) // f1@@flaat
{
	printf("\n inside float block");
}
void f1(double) // f1@@double
{
	printf("\n inside double block");
}
void f1(char) // f1@@char
{
	printf("\n inside char block");
}
void f1(bool) // f1@@bool
{
	printf("\n inside bool block");
}
void f1(char*) // f1@@string
{
	printf("\n inside char*(string) block");
}

int main(void)
{
	f1(10); // inside int block
	f1(10.2f); //inside float block
	f1(10.2F); //inside float block
	f1(10.2);//inside double block
	f1((int)10.2);//inside int block
	f1((float)10.2);//inside float block
	f1('A');//inside char block
	f1(true);//inside false block
	f1(false);//inside false block
	f1("sunbeam"); ////inside char*(string) block

	return 0;

}
