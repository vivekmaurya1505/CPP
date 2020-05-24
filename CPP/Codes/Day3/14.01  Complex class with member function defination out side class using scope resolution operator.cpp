#include<iostream>
using namespace std;

namespace NComplex
{
	class Complex
	{
		private:
			int real;
			int imag;
		public:
			//decl of member functions
			void AcceptInputFromConsole();
			void PrintOutputOnConsole();
			void SetReal(int real);
			void SetImag(int imag);
			int GetReal();
			//int GetImag(Complex * const this)
			int GetImag();
			Complex();
			Complex(int real, int imag);
			~Complex();


	};// end class complex

	//return_type className::MemberFunName(datatype parameters)

	//defination of member fun
	//void AcceptInputFromConsole(Complex * const this)
	// c1.AcceptInputFromConsole();  this=&c1;
	// c2.AcceptInputFromConsole();  this=&c2;
	//1.1 input
	void  Complex::AcceptInputFromConsole()
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
	void Complex::PrintOutputOnConsole()
	{
		cout<<"Real ::"<<this->real<<" [ "<< &this->real<<" ] "<<endl;
		cout<<"Imag ::"<<this->imag<<" [ "<< &this->imag<<" ] "<<endl;
	}

	//void SetReal(Complex * const this,int real)
	//2.0 mutator methods --> setter method they modify state of object
	void Complex::SetReal(int real)
	{
		this->real=real;
	}
	//void SetImag(Complex * const this,int imag)
	void  Complex::SetImag(int imag)
	{
		this->imag=imag;
	}

	//3.0 Inspectors -> getter methods
	// dont modify state of object
	//int GetReal(Complex * const this)
	int Complex::GetReal()
	{
		return this->real;
	}
	//int GetImag(Complex * const this)
	int Complex::GetImag()
	{
		return this->imag;
	}

	//4.1 parameter less ctor
	Complex::Complex()
	{
		this->real=10;
		this->imag=20;
		cout<<"inside parameterless ctor of Complex class"<<endl;
	}
	//4.2 parameterized less ctor with 2 arguments
	Complex::Complex(int real, int imag)
	{
		this->real=real;
		this->imag=imag;
		cout<<"inside parameterized ctor of Complex class"<<endl;
	}
	// dtor
	Complex::~Complex()
	{
		this->PrintOutputOnConsole();
		cout<<"-------------------------"<<endl;
		this->real=0;
		this->imag=0;
		cout<<"Inside dtor of Complex class"<<endl;
	}

}// end of namespace NComplex
using namespace NComplex;
int main(void)
{

	// parameterless ctor

	//cout<<"Enter data for c1 ::"<<endl;
	//c1.AcceptInputFromConsole();
	Complex c1; //NComplex::Complex c1;


	cout<<"c1 :: "<<endl;
	c1.PrintOutputOnConsole();
	cout<<"size of c1="<<sizeof(c1)<<endl;

	//NComplex::Complex c2(111,222); //

	// parameterized ctor with 2 arguments

	//cout<<"Enter data for c2 ::"<<endl;
	//c2.AcceptInputFromConsole();
	Complex c2(111,222);
	cout<<"c2 :: "<<endl;
	c2.PrintOutputOnConsole();
	cout<<"size of c2="<<sizeof(c2)<<endl;
	return 0;

}
