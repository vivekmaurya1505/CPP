#include<iostream>
using namespace std;

namespace NStaticDemo
{
	class StaticDemo
	{
		private:
			int id;
			int a;
			int b;
			static int counter;
		public:
			StaticDemo()
			{
				StaticDemo::counter++;
				this->a=10;
				this->b=20;
				this->id= StaticDemo::counter;
			}
			StaticDemo(int a, int b)
			{
				StaticDemo::counter++;
				this->a=a;
				this->b=b;
				this->id= StaticDemo::counter;
			}
			// non static member fun can access static data members
			// non static member fun can access non static data members
			void Print()
			{
				cout<<" this->id :: "<<this->id<<"["<< &this->id <<"]" << endl;
				cout<<" this->a :: "<<this->a<<"["<< &this->a <<"]" << endl;
				cout<<" this->b :: "<<this->b<<"["<< &this->b<<"]" <<endl;
				cout<<" StaticDemo::counter =" <<StaticDemo::counter<<"["<< &StaticDemo::counter <<"]" <<endl;

			}

			// static member fun can access only static data members
			// static member fun can access only non static data members
			static void SetCounter(int counter)
			{
				//this->a=100; //error
				StaticDemo::counter= counter;
			}
			~StaticDemo()
			{
				this->a=0;
				this->b=0;
				this->id= 0;
			}

	}; //end of StaticDemo

	int StaticDemo::counter; // global defination of static data member
}//end of Namespace Static Demo
using namespace NStaticDemo;
int main()
{
	StaticDemo::SetCounter(1000);;
	StaticDemo s1(1,2);

	cout<<"s1 :: "<<endl;
	s1.Print();
	cout<<"size of s1= "<<sizeof(s1)<<endl;


	StaticDemo s2(3,4);

	cout<<"s2 :: "<<endl;
	s2.Print();
	cout<<"size of s2= "<<sizeof(s2)<<endl;


	StaticDemo s3(5,6);

	cout<<"s3 :: "<<endl;
	s3.Print();
	cout<<"size of s3= "<<sizeof(s3)<<endl;

	cout<<"s3 :: "<<endl;
	s3.Print();

	StaticDemo s4, s5;
	cout<<"s4 :: "<<endl;
	s4.Print();
	cout<<"size of s4= "<<sizeof(s4)<<endl;
	cout<<"s5 :: "<<endl;
	s5.Print();
	cout<<"size of s5= "<<sizeof(s5)<<endl;

	return 0;
}

