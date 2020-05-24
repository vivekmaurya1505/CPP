#include<iostream>
using namespace std;
#include<string.h>
#define SIZE 40
namespace NException
{
	class Exception
	{
		private:
			int lineNo;
			char errorMessage[SIZE];
		public:
			Exception(int lineno, char * errormessgae)
			{
				this->lineNo= lineno;
				strcpy(this->errorMessage, errormessgae);
			}
			void PrintErrorMessage()
			{
				cout<<"Line No :: "<<this->lineNo<<endl;
				cout<<"Error Message :: "<<this->errorMessage<<endl;
				cout<<"File Name :: "<<__FILE__<<endl;
				cout<<"Date :: "<<__DATE__<<endl;
				cout<<"Time :: "<<__TIME__<<endl;
			}
	}; // end of expcetion class

}//end of NException Namespace
using namespace NException;
int main(void)
{
	int x=10, y=0, result=0;

	try
	{

		if(y==0)
			throw Exception(__LINE__+3,"Can not divide by Zero");
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
	catch(Exception& ex)
	{
		cout<<"inside exception block"<<endl;
		ex.PrintErrorMessage();
	}

	catch(...)
	{
		cout<<"inside Genric catch"<<endl;
		cout<<"can not divide by zero"<<endl;
	}



	return 0;
}
