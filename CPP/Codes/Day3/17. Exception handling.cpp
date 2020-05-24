#include<iostream>
using namespace std;
int main(void)
{
	int x=10, y=0, result=0;

	try
	{

		if(y==0)
			throw 'A';
			//throw false; // bool
				//throw true; // bool
			//throw 1.1F; // float
			//throw 1.1f; // float
			//throw 1.1; // double
		    // throw 1; // int
		else
		{
			result= x/y;
			cout<<"result="<<result<<endl;
		}
	}
	catch(char n1)
	{
		cout<<"inside char block1 n1="<<n1<<endl;
		cout<<"can not divide by zero"<<endl;
	}
	catch(char n1)
	{
		cout<<"inside char block2 n1="<<n1<<endl;
		cout<<"can not divide by zero"<<endl;
	}
	catch(int n1)
	{
		cout<<"inside int block n1="<<n1<<endl;
		cout<<"can not divide by zero"<<endl;
	}
	catch(double n1)
	{
		cout<<"inside double block n1="<<n1<<endl;
		cout<<"can not divide by zero"<<endl;
	}
	catch(float n1)
	{
		cout<<"inside float block n1="<<n1<<endl;
		cout<<"can not divide by zero"<<endl;
	}
	catch(bool n1)
	{
		cout<<"inside bool block n1="<<n1<<endl;
		cout<<"can not divide by zero"<<endl;
	}
	catch(...)
	{
		cout<<"inside Genric catch"<<endl;
		cout<<"can not divide by zero"<<endl;
	}



	return 0;
}
