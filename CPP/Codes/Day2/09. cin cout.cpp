#include<iostream>
//using namespace std;
int main(void)
{
	int no1;

	std::cout << "Enter No1 :: ";
	std::cin>>no1;

	std::cout<<"no1="<<no1<<"   &no1="<<&no1<<std::endl;

	using namespace std;
	{
		// int
		int no1, no2;
		cout<<"enter no1::";
		cin>>no1;
		cout<<"enter no2::";
		cin>>no2;

		cout<<" no1="<<no1<< "\t  &no1="<<&no1<<endl;
		cout<<" no2="<<no2<< "\t  &no2="<<&no2<<endl;
		//cin>>&no1; // error

	}

	{
			// float
		float no1, no2;
		cout<<"enter no1::";
		cin>>no1;
		cout<<"enter no2::";
		cin>>no2;
		cout<<" no1="<<no1<< "\t  &no1="<<&no1<<endl;
		cout<<" no2="<<no2<< "\t  &no2="<<&no2<<endl;
		//cin>>&no1; // error
	}

	{
			// char
		char no1, no2;
		cout<<"enter no1::";
		cin>>no1;
		cout<<"enter no2::";
		cin>>no2;
		cout<<" no1="<<no1<< "\t  &no1="<<(void*)&no1<<endl;
		cout<<" no2="<<no2<< "\t  &no2="<<(void*)&no2<<endl;
		cout<<" no1="<<no1<< "\t  &no1="<<&no1<<endl;
		cout<<" no2="<<no2<< "\t  &no2="<<&no2<<endl;

		//cin>>&no1; // error
		}

	return 0;

}

