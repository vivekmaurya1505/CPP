#include<iostream>
using namespace std;

namespace NArray
{
	template<class Type> // 1. write above class
	class Array
	{
		private:
			//variables or data members or fields
			int size;
			Type *arr; // 2. write type instead of data type
		public:
			//member function or methods

			Array(int size=5)
			{
				int index;
				this->size=size;
				this->arr= new Type[this->size]; // 3. allocate for specific type
				for(index=0; index<this->size; index++)
				{
					this->arr[index]=0;
				}
				cout<<"inside ctor of Array class"<<endl;
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
					cout<<this->arr[index] <<" [ " << (void*)&this->arr[index] <<" ] "<<endl;
				}
			}

			~Array()
			{
				if(this->arr!=NULL)
				{
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
	Array <int>a1;
	cout<<"enter elements for a1:: "<<endl;
	a1.AcceptInputFromConsole();

	cout<<"elements of array a1 :: "<<endl;
	a1.PrintOutputOnConsole();

	Array <float>a2;
	cout<<"enter elements for a2:: "<<endl;
	a2.AcceptInputFromConsole();

	cout<<"elements of array a2 :: "<<endl;
	a2.PrintOutputOnConsole();


	Array <char>a3;
	cout<<"enter elements for a3:: "<<endl;
	a3.AcceptInputFromConsole();
	cout<<"elements of array a3 :: "<<endl;
	a3.PrintOutputOnConsole();

	return 0;

}
