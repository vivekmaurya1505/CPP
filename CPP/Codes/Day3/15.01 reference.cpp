#include<iostream>
using namespace std;
int main(void)
{
	int a=10;
	const int &r=a;
	//const int *const r=&a;

	cout<<"a =" <<a <<"   &a="<<&a<<endl;
	cout<<"r =" <<r <<"   &r="<<&r<<endl;

	a=100; // allowed
	cout<<"a =" <<a <<"   &a="<<&a<<endl;
	cout<<"r =" <<r <<"   &r="<<&r<<endl;
	//r=1000; as reference is const

	char ch='A';
	char &r1=ch;
	//char *const r=&ch
	cout<<"ch="<<ch<< " &ch="<<(void*)&ch<<endl;
	cout<<"r1="<<r1<< " &r1="<<(void*)&r1<<endl;


	return 0;
}

