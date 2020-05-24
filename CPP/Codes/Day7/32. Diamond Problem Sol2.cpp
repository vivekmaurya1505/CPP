#include<iostream>
#include<cstring> // or #include<string.h>
using namespace std;
#pragma pack(1)

namespace NDiamondProblem
{
	class A
	{
		private:
			int a;
		public:
			A()
			{
				this->a=10;
				cout<<"inside parameterless ctor of class A "<<endl;
			}
			A(int a)
			{
				this->a=a;
				cout<<"inside parameteized ctor of class A "<<endl;
			}

			void Print()
			{
				cout<<"inside class A :: "<<endl;
				cout<<"this->a :: "<<this->a<<" \t ["<< &this->a<<"]"<<endl;
			}

			~A()
			{
				this->a=0;
				cout<<"inside dtor class  A "<<endl;
			}
	}; // end of class A

	class B: virtual public A
	{
		private:
				int b;
		public:
			B()
			{
				this->b=20;
				cout<<"inside parameterless ctor of class B "<<endl;
			}
			B(int a, int b):A(a)
			{
				this->b=b;
				cout<<"inside parameteized ctor of class B "<<endl;
			}

			void Print()
			{
			    A::Print();
				cout<<"inside class B :: "<<endl;
				cout<<"this->b :: "<<this->b<<" \t ["<< &this->b<<"]"<<endl;
			}
			void PrintOnlyB()
			{
				cout<<"inside class B :: "<<endl;
				cout<<"this->b :: "<<this->b<<" \t ["<< &this->b<<"]"<<endl;
			}


			~B()
			{
				this->b=0;
				cout<<"inside dtor class  B "<<endl;
			}
		}; // end of class A

	class C: virtual public A
	{
		private:
			int c;
		public:
		C()
		{
			this->c=30;
			cout<<"inside parameterless ctor of class C "<<endl;
		}
		C(int a, int c):A(a)
		{
			this->c=c;
			cout<<"inside parameteized ctor of class C "<<endl;
		}
		void Print()
		{
			A::Print();
			cout<<"inside class C :: "<<endl;
			cout<<"this->c :: "<<this->c<<" \t ["<< &this->c<<"]"<<endl;
		}
		void PrintOnlyC()
		{
			cout<<"inside class C :: "<<endl;
			cout<<"this->c :: "<<this->c<<" \t ["<< &this->c<<"]"<<endl;
		}

		~C()
		{
			this->c=0;
			cout<<"inside dtor class  C "<<endl;
		}
	}; // end of class C

	//class D : public C, public B
	class D : public B, public C
	{
		private:
			int d;
		public:
			D()
			{
				this->d=40;
				cout<<"inside parameterless ctor of class D "<<endl;
			}
			D(int a, int b, int c, int d):B(a, b), C(a, c), A(a)
			{
				this->d=d;
				cout<<"inside parameterized ctor of class D "<<endl;
			}
			void Print()
			{
				A::Print();
				B::PrintOnlyB();
				C::PrintOnlyC();
				cout<<"inside class D :: "<<endl;
				cout<<"this->d :: "<<this->d<<" \t ["<< &this->d<<"]"<<endl;

			}
			~D()
			{
				this->d=0;
				cout<<"inside dtor of class D "<<endl;
			}
	}; // end of class D


}// End of namespace NDiamondProblem

using namespace NDiamondProblem;
int main()
{

	/*A objInstance1;
	cout<<"objInstance1 ::"<<endl;
	objInstance1.Print();
	cout<<"size of objInstance1 :: "<<sizeof(objInstance1)<<endl;
	cout<<"==========================="<<endl;

	A objInstance2(100);
	cout<<"objInstance2 ::"<<endl;
	objInstance2.Print();
	cout<<"size of objInstance2 :: "<<sizeof(objInstance2)<<endl;
	cout<<"==========================="<<endl;
	*/

	/*
	B objInstance1;
	cout<<"objInstance1 ::"<<endl;
	objInstance1.Print();
	cout<<"size of objInstance1 :: "<<sizeof(objInstance1)<<endl;
	cout<<"==========================="<<endl;

	B objInstance2(100, 200);
	cout<<"objInstance2 ::"<<endl;
	objInstance2.Print();
	cout<<"size of objInstance2 :: "<<sizeof(objInstance2)<<endl;
	cout<<"==========================="<<endl;

	*/

/*	C objInstance1;
	cout<<"objInstance1 ::"<<endl;
	objInstance1.Print();
	cout<<"size of objInstance1 :: "<<sizeof(objInstance1)<<endl;
	cout<<"==========================="<<endl;

	C objInstance2(100, 300);
	cout<<"objInstance2 ::"<<endl;
	objInstance2.Print();
	cout<<"size of objInstance2 :: "<<sizeof(objInstance2)<<endl;
	cout<<"==========================="<<endl;
*/

	D objInstance1;
	cout<<"objInstance1 ::"<<endl;
	objInstance1.Print();
	cout<<"size of objInstance1 :: "<<sizeof(objInstance1)<<endl;
	cout<<"==========================="<<endl;


	D objInstance2(111,222,333,444);
	cout<<"objInstance2 ::"<<endl;
	objInstance2.Print();
	cout<<"size of objInstance2 :: "<<sizeof(objInstance2)<<endl;
	cout<<"==========================="<<endl;

	return 0;
}
