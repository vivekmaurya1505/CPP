#include<iostream>
using namespace std;
int main(void)
{
	float pj=3.13;
	const float pi=3.142;
	//float *ptr=&pi; // allow in c not in cpp

	const float *ptr=&pi; // allowed in cpp
	//float const *ptr=&pi; // allowed in cpp
	//float const *ptr=&pi;

	cout<<" *ptr="<<*ptr<<endl;

	//*ptr=3.13; // not allowed in cpp but allowed in c
	ptr=&pj; // allowed as address of pointer is not const

	cout<<" *ptr="<<*ptr<<endl;
	return 0;
}

