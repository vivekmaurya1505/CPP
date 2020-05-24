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

	Array a2(a1) //Array a2=a1;
	// a2 newly created obejct
	// a1 allready created object
	cout<<"enter elements for a2:: "<<endl;
	a2.AcceptInputFromConsole();

	cout<<"elements of array a2 :: "<<endl;
	a2.PrintOutputOnConsole();
	return 0;

}
