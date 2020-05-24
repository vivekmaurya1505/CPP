#include<iostream>
using namespace std;

namespace NMaths
{
	class Maths
	{
		public:
			static int Sum(int n1, int n2)
			{
				return n1+n2;
			}
			static int Minus(int n1, int n2)
			{
				return n1-n2;
			}


	};//end of Maths class

}//end of namespace
using namespace NMaths;
int main()
{
	int result=0;
	result= Maths::Sum(10, 20);
	cout<<"addition using class name :: "<<result<<endl;
	result= Maths::Minus(10, 20);
	cout<<"substraction using class name :: "<<result<<endl;

	Maths objInstance1;
	result= objInstance1.Sum(10, 20);
	cout<<"addition using object name :: "<<result<<endl;

	result= objInstance1.Minus(10, 20);
	cout<<"substraction using object name :: "<<result<<endl;


	return 0;
}
