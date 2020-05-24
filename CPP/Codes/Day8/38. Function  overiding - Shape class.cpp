#include<iostream>
using namespace std;

namespace NFunctionOverriding
{
		// abstact class -- one pure virtual function

	class Shape
	{
		protected :
		 	 double area;
		 	 double perimeter;
		public:
		 	 	Shape()
				{
		 	 		this->area=0;
		 	 		this->perimeter=0;
		 	 		cout<<"inside ctor of Shape class "<<endl;
				}
		 	 	// pure virtual function
		 	 	// virtual returntype funname()=0;
		 	 	virtual void AcceptInputFromConsole()=0;
		 	 	// pure virtual fun does not have have body
		 	 	virtual void PrintOupPutOnConsole()
		 	 	{
		 	 		// virtual fun may have body
		 	 		cout<<"inside print of shape class"<<endl;
		 	 	}
		 	 	virtual void CalculateArea()
		 	 	{

		 	 	}
		 	 	virtual void CalculatePerimeter()
		 	 	{
		 	 	}
		 	 	virtual ~Shape()
				{
		 	 		this->area=0;
		 	 		this->perimeter=0;
		 	 		cout<<"inside dtor of Shape class "<<endl;
				}
	}; //end of base class Shape

	class Circle : public Shape
	{
		private:
			double radius;

		public:
			Circle()
			{
				this->radius=0;
				cout<<"inside ctor circle class"<<endl;
			}
			void AcceptInputFromConsole()
			{
				cout<<"Enter Radius :: ";
				cin>>this->radius;
			}
		 	void PrintOupPutOnConsole()
			{
		 		cout<<" this->radius :: "<<this->radius<<endl;
		 		cout<<" this->area :: "<<this->area<<endl;
		 		cout<<" this->perimeter :: "<<this->perimeter<<endl;
			}

		 	void CalculateArea()
		 	{
		 		this->area= 3.142*this->radius*this->radius ;
		 	}
		 	void CalculatePerimeter()
		 	{
		 		this->perimeter= 3.142* 2* this->radius;
		 	}

			~Circle()
			{
				this->radius=0;
				cout<<"inside dtor circle class"<<endl;

			}

	};// end of Circle Class

	class Rectangle : public Shape
	{
		private:
			double l;
			double b;
		public:

			Rectangle()
			{
				this->l=0;
				this->b=0;
				cout<<"inside ctor of Rectangle class"<<endl;
			}
			void AcceptInputFromConsole()
			{
				cout<<"Enter Length :: ";
				cin>>this->l;
				cout<<"Enter B :: ";
				cin>>this->b;
			}
			 void PrintOupPutOnConsole()
			 {
				 cout<<" this->l :: "<<this->l<<endl;
				 cout<<" this->b :: "<<this->b<<endl;
				 cout<<" this->area :: "<<this->area<<endl;
				 cout<<" this->perimeter :: "<<this->perimeter<<endl;
			 }
			 void CalculateArea()
			 {
				 this->area= this->l * this->b;
			 }
			 void CalculatePerimeter()
			 {
			 	this->perimeter= 2*(this->l + this->b);
			 }

			~Rectangle()
			{
				this->l=0;
				this->b=0;
				cout<<"inside dtor of Rectangle class"<<endl;
			}

	};// end of Rectangle class

}//end of namespace NFunctionOverridning
using namespace NFunctionOverriding;
int MenuOperators();
int main(void)
{
	//Shape sh1; //error because shape is abstract class
	Shape *ptShape=NULL;
	int choice;

	do
	{

		choice= MenuOperators();
		switch(choice)
		{
			default : cout<<" invalid choice:: ";
					continue;
			case 1: // Circle
					ptShape= new Circle; // up casting
					break;
			case 2: // Rectangle
					ptShape= new Rectangle; // up casting
					break;
			case 0:
					return 0; //exit(0);
		}

		if(ptShape!=NULL)
		{
			ptShape->AcceptInputFromConsole();
			ptShape->CalculateArea();
			ptShape->CalculatePerimeter();
			ptShape->PrintOupPutOnConsole();

			delete ptShape;
			ptShape=NULL;

		}


		cout<<" Enter 1 to Continue 0 to Exit :: ";
		cin>>choice;

	}while(choice!=0);


	return 0;
}

int MenuOperators()
{
	int choice;
	cout<<"1. Circle \n 2.Rectangle \n 0. Exit ::";
	cout<<"\n Enter Your Choice::";
	cin>>choice;
	return choice;
}
