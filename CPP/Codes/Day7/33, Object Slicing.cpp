#include<iostream>
#include<cstring> // or #include<string.h>
using namespace std;
#pragma pack(1)

namespace NObejctSlicing
{
	class Base
	{
		private:
			int a;
			int b;
		public:
			Base()
			{
				this->a=0;
				this->b=0;
				cout<<"inside parameterless ctor of class Base"<<endl;
			}
			Base(int a, int b)
			{
				this->a=a;
				this->b=b;
				cout<<"inside parameteized ctor of class Base "<<endl;
			}

			void Print()
			{
				cout<<"inside class Base :: "<<endl;
				cout<<"this->a :: "<<this->a<<" \t ["<< &this->a<<"]"<<endl;
				cout<<"this->b :: "<<this->b<<" \t ["<< &this->b<<"]"<<endl;
			}

			~Base()
			{
				this->a=0;
				this->b=0;
				cout<<"inside dtor class  Base "<<endl;
			}
	}; // end of class Base

	class Derived: public Base
	{
		private:
				int c;
		public:
			Derived()
			{
				this->c=20;
				cout<<"inside parameterless ctor of class Derived "<<endl;
			}
			Derived(int a, int b, int c):Base(a, b)
			{
				this->c=c;
				cout<<"inside parameteized ctor of class Derived "<<endl;
			}

			void Print()
			{
			    Base::Print();
				cout<<"inside class Derived :: "<<endl;
				cout<<"this->c :: "<<this->c<<" \t ["<< &this->c<<"]"<<endl;
			}


			~Derived()
			{
				this->c=0;
				cout<<"inside dtor class  Derived "<<endl;
			}
		}; // end of class Derived


}// End of namespace NObejctSlicing

using namespace NObejctSlicing;
int main()
{
	Base obj1;
	cout<<"obj1 :: "<<endl;
	obj1.Print();

	cout<<"========================="<<endl;
	Derived obj2(50, 60, 70);
	cout<<"obj2 :: ";
	obj2.Print();

	cout<<"========================="<<endl;
	obj1=obj2; // object slicing allowed
	cout<<"obj1 :: "<<endl;
	obj1.Print();

	cout<<"========================="<<endl;
	//obj2=obj1; // error
	//cout<<"obj2 :: "<<endl;
	//obj2.Print();

	return 0;
}
