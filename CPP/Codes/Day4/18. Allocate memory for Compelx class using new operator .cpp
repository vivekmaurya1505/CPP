#include<iostream>
using namespace std;
#include<cstdlib> //#include<stdlib.h>

namespace NComplex
{
	class Complex
	{
		private:
			int real;
			int imag;
		public:
			//void AcceptInputFromConsole(Complex * const this)
			// c1.AcceptInputFromConsole();  this=&c1;
			// c2.AcceptInputFromConsole();  this=&c2;
			//1.1 input
			void AcceptInputFromConsole()
			{
				cout<<"Enter Real :: ";
				cin>>this->real;
				cout<<"Enter Imag :: ";
				cin>>this->imag;
			}
			//void PrintOutputOnConsole(className * const this)
			//void PrintOutputOnConsole(Complex * const this)
			//c1.PrintOutputOnConsole(); this=&c1;
			//c2.PrintOutputOnConsole(); this=&c2;
			// 1.2 output
			void PrintOutputOnConsole()
			{
				cout<<"Real ::"<<this->real<<" [ "<< &this->real<<" ] "<<endl;
				cout<<"Imag ::"<<this->imag<<" [ "<< &this->imag<<" ] "<<endl;
			}
			//void SetReal(Complex * const this,int real)

			//2.0 mutator methods --> setter method they modify state of object
			void SetReal(int real)
			{
				this->real=real;
			}

			//void SetImag(Complex * const this,int imag)
			void SetImag(int imag)
			{
				this->imag=imag;
			}

			//3.0 Inspectors -> getter methods
			// dont modify state of object

			//int GetReal(Complex * const this)
			int GetReal()
			{
				return this->real;
			}
			//int GetImag(Complex * const this)
			int GetImag()
			{
				return this->imag;
			}

			//4.1 parameter less ctor
			Complex()
			{
				this->real=10;
				this->imag=20;
				cout<<"inside parameterless ctor of Complex class"<<endl;
			}
			//4.2 parameterized less ctor with 2 arguments
			Complex(int real, int imag)
			{
				this->real=real;
				this->imag=imag;
				cout<<"inside parameterized ctor of Complex class"<<endl;
			}

			// dtor
			~Complex()
			{
				this->PrintOutputOnConsole();
				cout<<"-------------------------"<<endl;
				this->real=0;
				this->imag=0;
				cout<<"Inside dtor of Complex class"<<endl;
			}



	};// end class complex


}// end of namespace NComplex
using namespace NComplex;
int main(void)
{
	// allocate memory using malloc fun
	Complex *pt1= (Complex*)malloc(sizeof(Complex)*1);
	cout<<"*pt1 :: "<<endl;
	pt1->PrintOutputOnConsole();
	free(pt1);
	pt1=NULL;

	cout<<"Memory is freed for pt1"<<endl;


	// allocate memory using new operator

	Complex *pt2=new Complex; // parameter less
	cout<<"*pt2 :: "<<endl;
	pt2->PrintOutputOnConsole();
//	delete pt2;
//	pt2=NULL;
	//cout<<"Memory is freed for pt2"<<endl;

	int real, imag;
	cout<<"Enter Real :: ";
	cin>>real;

	cout<<"Enter Imag :: ";
	cin>>imag;


	Complex *pt3=new Complex(real, imag); // parameterized less
	cout<<"*pt3 :: "<<endl;
	pt3->PrintOutputOnConsole();

	delete pt2;
	pt2=NULL;
	cout<<"Memory is freed for pt2"<<endl;

	delete pt3;
	pt3=NULL;
	cout<<"Memory is freed for pt3"<<endl;


	return 0;

}
