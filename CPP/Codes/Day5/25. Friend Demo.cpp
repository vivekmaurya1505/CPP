#include<iostream>
using namespace std;

namespace NFriendDemo
{
	class FriendDemo
	{
		private:
			int a;
			int b;
		public:
			FriendDemo()
			{
				this->a=10;
				this->b=20;
			}
			FriendDemo(int a, int b)
			{
				this->a=a;
				this->b=b;
			}
			void Print()
			{
				cout<<"this->a :: "<<this->a<<endl;
				cout<<"this->b :: "<<this->b<<endl;
			}
			~FriendDemo()
			{
				this->a=0;
				this->b=0;
			}
			friend void Sum();
	};// end of class FriendDemo

	void Sum()
	{
		FriendDemo obj1;
		int result= obj1.a + obj1.b;
		cout<<"result="<<result<<endl;
	}

}// end of namespace FriendDemo
using namespace NFriendDemo;
int main()
{
	Sum();

	return 0;
}
