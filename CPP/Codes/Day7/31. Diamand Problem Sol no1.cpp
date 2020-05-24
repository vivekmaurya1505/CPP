#include<iostream>
#include<cstring> // or #include<string.h>
using namespace std;
#pragma pack(1)

namespace NDiamondProblem
{
	class A
	{
		public:
			int a;

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

	class B: public A
		{
			public:
				int b;

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
				cout<<"this->a :: "<<this->a<<" \t ["<< &this->a<<"]"<<endl;
				cout<<"this->b :: "<<this->b<<" \t ["<< &this->b<<"]"<<endl;
			}

			~B()
			{
				this->b=0;
				cout<<"inside dtor class  B "<<endl;
			}
		}; // end of class A

	class C: public A
	{
		public:
			int c;

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
			cout<<"this->a :: "<<this->a<<" \t ["<< &this->a<<"]"<<endl;
			cout<<"this->c :: "<<this->c<<" \t ["<< &this->c<<"]"<<endl;
		}

		~C()
		{
			this->c=0;
			cout<<"inside dtor class  C "<<endl;
		}
	}; // end of class C

	class D : public B, public C
	{
		public:
			int d;

			D()
			{
				this->d=40;
				cout<<"inside parameterless ctor of class D "<<endl;
			}
			D(int a, int b, int c, int d):B(a, b), C(a, c)
			{
				this->d=d;
				cout<<"inside parameterized ctor of class D "<<endl;
			}
			void Print()
			{
				B::Print();
				C::Print();
				cout<<"inside class D :: "<<endl;
				// diamond problem
				//cout<<"this->a :: "<<this->a<<" \t ["<< &this->a<<"]"<<endl;

				// sol no 1
				cout<<"this->a :: via class B "<<this->B::a<<" \t ["<< &this->B::a<<"]"<<endl;
				cout<<"this->a :: via class C "<<this->C::a<<" \t ["<< &this->C::a<<"]"<<endl;

				cout<<"this->b:: "<<this->b<<" \t ["<< &this->b<<"]"<<endl;
				cout<<"this->c :: "<<this->c<<" \t ["<< &this->c<<"]"<<endl;
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
	/*
	A objInstance1;
	cout<<"objInstance1 ::"<<endl;
	objInstance1.Print();
	cout<<"size of objInstance1 :: "<<sizeof(objInstance1)<<endl;
	cout<<" objInstance1.a :: "<<objInstance1.a<<endl;
	cout<<"==========================="<<endl;


	A objInstance2(100);
	cout<<"objInstance2 ::"<<endl;
	objInstance2.Print();
	cout<<"size of objInstance2 :: "<<sizeof(objInstance2)<<endl;
	cout<<" objInstance2.a :: "<<objInstance2.a<<endl;
	cout<<"==========================="<<endl;

*/
/*	B objInstance1;
	cout<<"objInstance1 ::"<<endl;
	objInstance1.Print();
	cout<<"size of objInstance1 :: "<<sizeof(objInstance1)<<endl;
	cout<<" objInstance1.a :: "<<objInstance1.a<<endl;
	cout<<" objInstance1.b :: "<<objInstance1.b<<endl;
	cout<<"==========================="<<endl;
*/
/*	B objInstance2(100, 200);
	cout<<"objInstance2 ::"<<endl;
	objInstance2.Print();
	cout<<"size of objInstance2 :: "<<sizeof(objInstance2)<<endl;
	cout<<" objInstance2.a :: "<<objInstance2.a<<endl;
	cout<<" objInstance2.b :: "<<objInstance2.b<<endl;
	cout<<"==========================="<<endl;
*/


	/*	C objInstance1;
		cout<<"objInstance1 ::"<<endl;
		objInstance1.Print();
		cout<<"size of objInstance1 :: "<<sizeof(objInstance1)<<endl;
		cout<<" objInstance1.a :: "<<objInstance1.a<<endl;
		cout<<" objInstance1.c :: "<<objInstance1.c<<endl;
		cout<<"==========================="<<endl;
	 */
	/*	C objInstance2(100, 300);
		cout<<"objInstance2 ::"<<endl;
		objInstance2.Print();
		cout<<"size of objInstance2 :: "<<sizeof(objInstance2)<<endl;
		cout<<" objInstance2.a :: "<<objInstance2.a<<endl;
		cout<<" objInstance2.c :: "<<objInstance2.c<<endl;
		cout<<"==========================="<<endl;
	*/

/*	D objInstance1;
	cout<<"objInstance1 ::"<<endl;
	objInstance1.Print();
	cout<<"size of objInstance1 :: "<<sizeof(objInstance1)<<endl;
	//cout<<" objInstance1.a :: "<<objInstance1.a<<endl; // diamond problem
	cout<<" objInstance1.B::a :: via B"<<objInstance1.B::a<<endl; //sol no 1
	cout<<" objInstance1.C::a :: via C"<<objInstance1.C::a<<endl;
	cout<<" objInstance1.b :: "<<objInstance1.b<<endl;
	cout<<" objInstance1.c :: "<<objInstance1.c<<endl;
	cout<<" objInstance1.d :: "<<objInstance1.d<<endl;
	cout<<"==========================="<<endl;*/


D objInstance2(111,222,333,444);
	cout<<"objInstance2 ::"<<endl;
	objInstance2.Print();
	cout<<"size of objInstance2 :: "<<sizeof(objInstance2)<<endl;
	//cout<<" objInstance2.a :: "<<objInstance2.a<<endl; // diamond problem
	cout<<" objInstance2.B::a :: via B  ::"<<objInstance2.B::a<<endl; //sol no 1
	cout<<" objInstance2.C::a :: via C   ::"<<objInstance2.C::a<<endl;
	cout<<" objInstance2.b :: "<<objInstance2.b<<endl;
	cout<<" objInstance2.c :: "<<objInstance2.c<<endl;
	cout<<" objInstance2.d :: "<<objInstance2.d<<endl;
	cout<<"==========================="<<endl;

	return 0;
}
