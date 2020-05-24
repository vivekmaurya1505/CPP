#include<iostream>
using namespace std;
int main(void)
{
	//int &r2=NULL; //error

	// we can create reference to objects(variables)
	int a=10;
	int &r=a; // r is a reference of a
	//int * const r=&a;
	int &r1=a;


	cout<<"a="<<a<<"    &a="<<&a<<endl;
	cout<<"r="<<r<<"    &r="<<&r<<endl;
	cout<<"r1="<<r<<"    &r="<<&r1<<endl;
	cout<<"=================================="<<endl;

	a=100;
	cout<<"a="<<a<<"    &a="<<&a<<endl;
	cout<<"r="<<r<<"    &r="<<&r<<endl;

	cout<<"=================================="<<endl;
	r=1000;
	cout<<"a="<<a<<"    &a="<<&a<<endl;
	cout<<"r="<<r<<"    &r="<<&r<<endl;

	cout<<"=================================="<<endl;
	r++;
	cout<<"a="<<a<<"    &a="<<&a<<endl;
	cout<<"r="<<r<<"    &r="<<&r<<endl;
	cout<<"=================================="<<endl;
	a++;
	cout<<"a="<<a<<"    &a="<<&a<<endl;
	cout<<"r="<<r<<"    &r="<<&r<<endl;
	cout<<"=================================="<<endl;

	r=NULL; // we can assign NULL to reference r
	cout<<"a="<<a<<"    &a="<<&a<<endl;
	cout<<"r="<<r<<"    &r="<<&r<<endl;


	{
		//int &r2=100; // error
		// we can not create reference to consts
		// but we can create reference to objects

		//cout<<"r2"<<r2<<endl;
	}

	return 0;
}
