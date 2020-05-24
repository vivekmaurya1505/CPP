#include<iostream>
using namespace std;

namespace NArray
{
	class Array
	{
		private:
			//variables or data members or fields
			int size;
			int *arr;
		public:
			//member function or methods

			Array(int size=5)
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
			Array(const Array& other)
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

			void AcceptInputFromConsole()
			{
				int index;
				for(index=0; index<this->size; index++)
				{
					cout<<"this->arr[ "<<index<<" ] ";
					cin>>this->arr[index];
				}
			}
			void PrintOutputOnConsole()
			{
				int index;
				for(index=0; index<this->size; index++)
				{
					cout<<this->arr[index] <<" [ " << &this->arr[index] <<" ] "<<endl;
				}
			}

			~Array()
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



	}; //end of class Array

} // end of namespace

using namespace NArray;
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
