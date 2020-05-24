#include<iostream>
using namespace std;

#include"../include/Array.h"
using namespace NArray;

// function calls of Array class
int main(void)
{
	Array a1;
	cout<<"enter elements for a1:: "<<endl;
	a1.AcceptInputFromConsole();

	cout<<"elements of array a1 :: "<<endl;
	a1.PrintOutputOnConsole();

	//copy ctor ->>
	//when we assign already created object to the newly created
	//object (object initialization)
	Array a2(a1); //Array a2=a1;
	// a2 newly created obejct
	// a1 allready created object

	cout<<"elements of array a2 :: "<<endl;
	a2.PrintOutputOnConsole();
	return 0;

}




