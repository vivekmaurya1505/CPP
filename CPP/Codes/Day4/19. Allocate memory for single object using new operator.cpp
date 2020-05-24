#include<iostream>
using namespace std;
int main(void)
{
	int *ptr=NULL;
	//ptr= (int*)malloc(sizeof(int)*1);
	//ptr=new int; //garbage just like malloc
	ptr=new int(333); //333

	cout<<"&ptr="<<&ptr<<endl;
	cout<<"ptr="<<ptr<<endl;
	cout<<"*ptr="<<*ptr<<endl;

//	*ptr=550;
	cout<<"Enter *ptr :: ";
	//cin>>ptr; //error //scanf("%d", ptr);
	cin>>*ptr; //allowed
	cout<<"*ptr="<<*ptr<<endl;


	delete ptr;
	ptr=NULL;
	cout<<"memory is freed"<<endl;


	return 0;

}
		// complie --->> g++ Demo1.cpp ---> a.out
 					//  >> ./a.out
                   //  >> valgrind ./a.out





