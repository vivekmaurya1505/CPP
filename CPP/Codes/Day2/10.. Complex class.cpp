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
			void AcceptInputFromConsole()
			{
				cout<<"Enter Real :: ";
				cin>>real;
				cout<<"Enter Imag :: ";
				cin>>imag;
			}
			void PrintOutputOnConsole()
			{
				cout<<"Real ::"<<real<<" [ "<< &real<<" ] "<<endl;
				cout<<"Imag ::"<<imag<<" [ "<< &imag<<" ] "<<endl;
			}


	};// end class complex
}// end of namespace NComplex
using namespace NComplex;
int main(void)
{

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

