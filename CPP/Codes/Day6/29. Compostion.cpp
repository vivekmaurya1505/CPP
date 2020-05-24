#include<iostream>
#include<cstring> // or #include<string.h>
using namespace std;
#pragma pack(1)

namespace NComposition
{
	class Date
	{
		private:
			//variables or data members or fields
			int dd;
			int mm;
			int yy;

		public:
			Date()
			{
				this->dd=3;
				this->mm=5;
				this->yy=2019;
				cout<<"inside parameterless ctor of Date class"<<endl;
			}
			Date(int dd, int mm, int yy)
			{
				this->dd=dd;
				this->mm=mm;
				this->yy=yy;
				cout<<"inside parameterized ctor of Date class"<<endl;
			}
			void Print()
			{
				cout<<"date :: "<<endl;
				cout<<this->dd<<"-"<<this->mm<<"-"<<this->yy<<endl;
			}
			~Date()
			{
				this->dd=0;
				this->mm=0;
				this->yy=0;
				cout<<"inside dtor of Date class"<<endl;
			}
	};//end of Date class

	class Address
	{
		private:
			char peraddress[30];
			char city[20];
			int pincode;
		public:
			Address()
			{
				strcpy(this->peraddress, "Market Yard");
				strcpy(this->city, "Pune");
				this->pincode=41137;
				cout<<"inside parameterless ctor of Address Class"<<endl;
			}
			Address(char *peraddress, char *city, int pincode)
			{
				strcpy(this->peraddress, peraddress);
				strcpy(this->city, city);
				this->pincode=pincode;
				cout<<"inside parameterized ctor of Address Class"<<endl;
			}
			void Print()
			{
				cout<<"Per Address:: "<<endl;
				cout<<" PerAddress :: "<<this->peraddress<<endl;
				cout<<" City ::"<<this->city<<endl;;
				cout<<" Pincode ::"<<this->pincode<<endl;

			}
			~Address()
			{
				strcpy(this->peraddress, "");
				strcpy(this->city, "");
				this->pincode=0;
				cout<<"inside dtor of Address Class"<<endl;
			}
	}; //end of Address Class

	class Person
	{
		private:
			char name[10];      //10
			Address address;    // 54
			Date birthDate;     //12


		public:
			Person()
			{
				strcpy(this->name, "Amit");
				cout<<"inside parameterless ctor of Person class"<<endl;
			}
			//Person(all parameters of Person  name, address , date with data type):ComplosedObejctName(all parameters of ComplosedObejctName without datatype), :ComplosedObejctName1(all parameters of ComplosedObejctName1 without datatype)
			Person(char *name,char *peraddress, char *city, int pincode,  int dd, int mm, int yy ) : address(peraddress, city, pincode), birthDate(dd, mm, yy)

			{
				strcpy(this->name, name);
				cout<<"inside parameterized ctor of Person class"<<endl;
			}
			void Print()
			{
				cout<<" Person Info ::"<<endl;
				cout<<" Name :: "<<this->name<<endl;
				//cout<<"Per Address  ::";
				this->address.Print();
				//cout<<" birth date :: ";
				this->birthDate.Print();
			}

			~Person()
			{
				strcpy(this->name, " ");
				cout<<"inside dtor of Person class"<<endl;
			}



	};
}//end of namespace NComposition
using namespace NComposition;
int main()
{
	/*Date d1;
	cout<<"d1:: "<<endl;
	d1.Print();
	cout<<"size of d1="<<sizeof(d1)<<endl;

	Date d2(1,2,2000);
	cout<<"d2:: "<<endl;
	d2.Print();
	cout<<"size of d2="<<sizeof(d2)<<endl;
	 */

/*	Address a1;
	cout<<"a1:: "<<endl;
	a1.Print();
	cout<<"size of a1="<<sizeof(a1)<<endl;

	Address a2("It Park, Mumbai", "Mumbai", 654321);
	cout<<"a2:: "<<endl;
	a2.Print();
	cout<<"size of a2="<<sizeof(a1)<<endl;
*/
/*	Person p1;
	cout<<"p1:: "<<endl;
	p1.Print();
	cout<<"size of p1="<<sizeof(p1)<<endl;
*/

	Person p2("Yogesh", "It Park", "Pune", 123456, 12,2,1995);
	cout<<"p2:: "<<endl;
	p2.Print();
	cout<<"size of p2="<<sizeof(p2)<<endl;
	return 0;
}
