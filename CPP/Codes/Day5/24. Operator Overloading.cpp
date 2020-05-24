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
			//4.3copy ctor
			// shallow copy in copy ctor
			Complex(const Complex& other)
			{
				this->real=other.real;
				this->imag=other.imag;
				cout<<"inside copy ctor of Complex class"<<endl;
			}




			// 5. dtor
			~Complex()
			{
				this->real=0;
				this->imag=0;
				cout<<"Inside dtor of Complex class"<<endl;
			}

			//Complex Minus(Complex other)
			Complex Minus(Complex &other)
			{
				Complex temp;
				          // &c1       // other is reference of c2
				temp.real= this->real - other.real;
				temp.imag= this->imag - other.imag;
				return temp;
			}

			Complex operator-(Complex &other)
			{
				Complex temp;
				          // &c1       // other is reference of c2
				temp.real= this->real - other.real;
				temp.imag= this->imag - other.imag;
				return temp;
			}


		friend Complex operator+(Complex &other1, Complex &other2);
		//friend Complex Sum(Complex other1, Complex other2);
		friend Complex Sum(Complex &other1, Complex &other2);
	};// end class complex

	// parameter other1 and other2 are pass by value
	// Complex Sum(Complex other1, Complex other2)
	// parameter other1 and other2 are pass by reference
	Complex Sum(Complex &other1, Complex &other2)
	{
		// other1 is reference for c1
		// other2 is reference for c2
		Complex temp;
		temp.real= other1.real+other2.real;
		temp.imag= other1.imag+other2.imag;
		return temp;
	}


	Complex operator+(Complex &other1, Complex &other2)
		{
			// other1 is reference for c1
			// other2 is reference for c2
			Complex temp;
			temp.real= other1.real+other2.real;
			temp.imag= other1.imag+other2.imag;
			return temp;
		}

}// end of namespace NComplex
using namespace NComplex;

int main()
{
	// check copy ctor of Complex class
	/*Complex c1(111,222);
	cout<<"c1 :: "<<endl;
	c1.PrintOutputOnConsole();

	Complex c2(c1);//Complex c2=c1;
	cout<<"c2 :: "<<endl;
	c2.PrintOutputOnConsole();*/

	//2.addition of two complex using friend function (global fun c style)
/*
	//Complex c1(11,22), c2(33,44);

	cout<<"c1 :: "<<endl;
	c1.PrintOutputOnConsole();

	cout<<"c2 :: "<<endl;
	c2.PrintOutputOnConsole();

	Complex c3= Sum(c1, c2);

	cout<<"c3 :: sum using global function "<<endl;
	c3.PrintOutputOnConsole();
*/

	//3. sub of two complex using member function (cpp style)

/*		Complex c1(11,22), c2(33,44);

		cout<<"c1 :: "<<endl;
		c1.PrintOutputOnConsole();

		cout<<"c2 :: "<<endl;
		c2.PrintOutputOnConsole();

		Complex c3= c1.Minus(c2);

		cout<<"c3 :: sub using member function "<<endl;
		c3.PrintOutputOnConsole();
*/

	//4.addition of two complex using operator overloading as friend function (global fun c style)
/*
		Complex c1(11,22), c2(33,44);

		cout<<"c1 :: "<<endl;
		c1.PrintOutputOnConsole();

		cout<<"c2 :: "<<endl;
		c2.PrintOutputOnConsole();

		Complex c3= c1+c2;//operator+(c1, c2);
	// Complex c3= operator+(c1, c2);
    // Complex c3= Sum(c1, c2);

		cout<<"c3 :: sum using global function "<<endl;
		c3.PrintOutputOnConsole();
*/

	//5. sub of two complex using operator overloading as member function (cpp style)

		Complex c1(11,22), c2(33,44);
		cout<<"c1 :: "<<endl;
		c1.PrintOutputOnConsole();

		cout<<"c2 :: "<<endl;
		c1.PrintOutputOnConsole();

		Complex c3= c1-c2;
		//Complex c3= c1.operator-(c2);
		//Complex c3= c1.Minus(c2);


		cout<<"c3 :: sub using member function "<<endl;
		c3.PrintOutputOnConsole();


		Complex c4;
		//cin>>c4;  //error

		//cout<<c4; // error


		{

			Complex c1;
			Complex c2=c1; //Complex c2(c1);// copy ctor
			// c1 all ready created
			// c2 newly created
		}

		{
			Complex c1, c2;
			c2=c1;  // c2.operator=(c1); // operator=
			c1=c2;  // c1.operator=(c2);
			//c1  , c2 all ready created
		}





	return 0;
}

