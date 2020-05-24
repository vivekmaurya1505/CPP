#include<iostream>
using namespace std;
#include"../include/Array.h"
using namespace NArray;

// definations of Member function of Array class
//returnType ClassName::MemberfunName(datatype parameter)

	//member function or methods
	Array:: Array(int size)
	{
		int index;
		this->size=size;
		this->arr= new int[this->size];
		for(index=0; index<this->size; index++)
		{
			this->arr[index]=0;
		}
		cout<<"inside ctor of Array class"<<endl;
	}

	//deep copy inside copy ctor
	// copy ctor
	//className(const classname& objectname)
	Array:: Array(const Array& other)
	{
		//&a2       //other is a reference of a1
		this->size= other.size; // 1. copy size
		this->arr= new int[this->size]; // 2 allocate mmeory
		for(int index=0; index<this->size; index++)
		{
			this->arr[index]= other.arr[index]; // 3. copy data
		}
		cout<<"inside copy ctor"<<endl;
	}

	void Array::AcceptInputFromConsole()
	{
		int index;
		for(index=0; index<this->size; index++)
		{
			cout<<"this->arr[ "<<index<<" ] ";
			cin>>this->arr[index];
		}
	}
	void Array:: PrintOutputOnConsole()
	{
		int index;
		for(index=0; index<this->size; index++)
		{
			cout<<this->arr[index] <<" [ " << &this->arr[index] <<" ] "<<endl;
		}
	}

	Array:: ~Array()
	{
		if(this->arr!=NULL)
		{
			cout<<"============================"<<endl;
			this->PrintOutputOnConsole();
			cout<<"============================"<<endl;
			delete [] this->arr;
			this->arr=NULL;
		}
		cout<<"inside dtor of Array class"<<endl;
	}

