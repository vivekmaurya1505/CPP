//header gaurds

#ifndef ARRAY_H_
#define ARRAY_H_

// delc of class Array
namespace NArray
{
	class Array
	{
		private:
			//variables or data members or fields
			int size;
			int *arr;
		public:
			Array(int size=5);
			Array(const Array& other);
			void AcceptInputFromConsole();
			void PrintOutputOnConsole();
			~Array();
	}; //end of class Array

}//end of NArray Namespace



#endif /* ARRAY_H_ */
