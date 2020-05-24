#include<iostream>
#include<cstring> // or #include<string.h>
using namespace std;


namespace NTemplate
{
	template <class Type>
	void swap(Type &n1, Type &n2)
	{
		Type temp;
		temp=n1;
		n1=n2;
		n2=temp;
	}



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
				//cout<<"inside parameterless ctor of Complex class"<<endl;
			}
			//4.2 parameterized less ctor with 2 arguments
			Complex(int real, int imag)
			{
				this->real=real;
				this->imag=imag;
				//cout<<"inside parameterized ctor of Complex class"<<endl;
			}

			// dtor
			~Complex()
			{
				this->real=0;
				this->imag=0;
				//cout<<"Inside dtor of Complex class"<<endl;
			}



	};// end class complex

}
using namespace NTemplate;
int main()
{
	{
		int no1=10, no2=20;
		cout<<"data type :: int"<<endl;
		cout<<"before swap no1="<<no1<<"  no2="<<no2<<endl;
		NTemplate::swap(no1, no2);
		cout<<"after swap no1="<<no1<<"  no2="<<no2<<endl;
	}
	cout<<"================================"<<endl;
	{
		float no1=10.2, no2=20.1;
		cout<<"data type :: float"<<endl;
		cout<<"before swap no1="<<no1<<"  no2="<<no2<<endl;
		NTemplate::swap(no1, no2);
		cout<<"after swap no1="<<no1<<"  no2="<<no2<<endl;
	}
	cout<<"================================"<<endl;
	{
		char no1='A', no2='B';
		cout<<"data type :: char"<<endl;
		cout<<"before swap no1="<<no1<<"  no2="<<no2<<endl;
		NTemplate::swap(no1, no2);
		cout<<"after swap no1="<<no1<<"  no2="<<no2<<endl;
	}
	cout<<"================================"<<endl;

	{
		Complex c1(11,22), c2(33,44);
		cout<<"data type :: Complex"<<endl;
		cout<<"before swap :: "<<endl;
		cout<<"c1 ::"<<endl;
		c1.PrintOutputOnConsole();
		cout<<"c2 ::"<<endl;
		c2.PrintOutputOnConsole();

		NTemplate::swap(c1, c2);

		cout<<"After swap :: "<<endl;
		cout<<"c1 ::"<<endl;
		c1.PrintOutputOnConsole();
		cout<<"c2 ::"<<endl;
		c2.PrintOutputOnConsole();
	}




	cout<<"================================"<<endl;

	return 0;
}

