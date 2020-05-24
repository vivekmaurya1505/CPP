#include<iostream>
using namespace std;

namespace NConstDemo
{
	class ConstDemo
	{
		private:
			//const int a=10; //cpp11
			//const int b=20; //cpp11
			const int a;
			const int b;
			int c;
			mutable int d;
		public:
			// ctor ini list
			ConstDemo():a(10), b(20), c(30), d(40)
			{
				//this->a=10; //error as and b are  const data members
				//this->b=20;
				//this->c=30; // allowed as c and d are non const data members
				//this->d=40;
			}

			ConstDemo(int a, int b, int c, int d):a(a), b(b), c(c), d(d)
			{
				//this->a=a;//error as and b are  const data members
				//this->b=b;
				//this->c=c; // allowed as c and d are non const data members
				//this->d=d;
			}

			// in const member fun we can not change the state of object only
			// with this function

			//void Print(ConstDemo * const this)
			//void Print()

			//void Print(const ConstDemo * const this)
			void Print()const
			{
				//this->a=11; // error as a , b are const data member
				//this->b=21;
				// we can not state of obejct in const member fun
				//this->c=31;

				this->d=41; // allowed as d is mutable data member
				cout<<"this->a= "<<this->a<<endl;
				cout<<"this->b= "<<this->b<<endl;
				cout<<"this->c= "<<this->c<<endl;
				cout<<"this->d= "<<this->d<<endl;
			}

			//void Display(ConstDemo * const this)
			void Display()
			{
				//this->a=11; // error as a , b are const data member
				//this->b=21;
				// we can not state of obejct in const member fun
				this->c=31;
				this->d=41;
				cout<<"this->a= "<<this->a<<endl;
				cout<<"this->b= "<<this->b<<endl;
				cout<<"this->c= "<<this->c<<endl;
				cout<<"this->d= "<<this->d<<endl;
			}

			~ConstDemo()
			{
				//this->a=0; // errro as a and b are const data member
				//this->b=0;
				this->c=0; // allows as c and d are non const data memberes
				this->d=0;
			}

	}; //end of Class ConstDemo

}// end of namespace NConstDemo
using namespace NConstDemo;
int main()
{
	ConstDemo c1;// ConstDemo * const this;

	cout<<"c1 :: Print() "<<endl;
	// non const object can call both const member fun and non const member fun
	c1.Print();
	// non const obejct can call const member fun (Print)

	cout<<"c1 :: Display() "<<endl;
	// non const object can call non const member fun (Display)
	c1.Display();

	cout<<"size of c1 ="<<sizeof(c1)<<endl;

	ConstDemo c2(111,222,333,444);
	cout<<"c2 ::Print "<<endl;
	c2.Print();
	cout<<"c2 :: Display() "<<endl;
	c2.Display();
	cout<<"size of c2 ="<<sizeof(c2)<<endl;



	const ConstDemo c3;   // const ConstDemo * const this;
	cout<<" c3 :: "<<endl;
	// const obejct can call only const member function of class
	c3.Print();
    //const object can not call non const member function
	//c3.Display(); //error

	return 0;
}
