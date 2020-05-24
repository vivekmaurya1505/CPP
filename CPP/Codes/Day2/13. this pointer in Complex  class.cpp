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
			//void AcceptInputFromConsole(Complex * const this)
			// e1.AcceptInputFromConsole();  this=&e1;
			// e2.AcceptInputFromConsole();  this=&e2;
			void AcceptInputFromConsole()
			{
				cout<<"Enter Real :: ";
				cin>>this->real;
				cout<<"Enter Imag :: ";
				cin>>this->imag;
			}
			//void PrintOutputOnConsole(className * const this)
			//void PrintOutputOnConsole(Complex * const this)
			//e1.PrintOutputOnConsole(); this=&e1;
			//e2.PrintOutputOnConsole(); this=&e2;
			void PrintOutputOnConsole()
			{
				cout<<"Real ::"<<this->real<<" [ "<< &this->real<<" ] "<<endl;
				cout<<"Imag ::"<<this->imag<<" [ "<< &this->imag<<" ] "<<endl;
			}
			//void SetReal(Complex * const this,int real)
			void SetReal(int real)
			{
				this->real=real;
			}
			//void SetImag(Complex * const this,int imag)
			void SetImag(int imag)
			{
				this->imag=imag;
			}
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




	};// end class complex
}// end of namespace NComplex
using namespace NComplex;
int main(void)
{
`
	Complex c1; //NComplex::Complex c1;
	NComplex::Complex c2; // Complex c2;

	cout<<"Enter data for c1 ::"<<endl;
	c1.AcceptInputFromConsole();

	cout<<"c1 :: "<<endl;
	c1.PrintOutputOnConsole();
	cout<<"size of c1="<<sizeof(c1)<<endl;

	cout<<"Enter data for c2 ::"<<endl;
	c2.AcceptInputFromConsole();

	cout<<"c2 :: "<<endl;
	c2.PrintOutputOnConsole();
	cout<<"size of c2="<<sizeof(c2)<<endl;
	return 0;

}
