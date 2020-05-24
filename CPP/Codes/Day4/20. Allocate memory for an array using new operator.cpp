#include<iostream>
using namespace std;
int main(void)
{
	int *ptr=NULL, no, i;

	try
	{
		cout<<"Enter How many elements you want :: ";
		cin>>no;

		ptr= new int[no]; // check with  no=-5 gives exception bad_alloc

		cout<<"Elements of array :: "<<endl;
		for(i=0; i<no; i++)
		{
			cout<<"ptr[ " << i <<" ] :: ";
			cin>>ptr[i]; // scanf("%d", &ptr[i]);
		}


		for(i=0; i<no; i++)
		{
			cout<<"ptr["<<i<<"] ::";
			cout<<ptr[i]<<" [ "<< &ptr[i] <<" ] "<< endl; // printf("%d", ptr[i]);
		}
		//free(ptr); ptr=NULL
		delete [] ptr;
		ptr=NULL;
		cout<<"memory freed"<<endl;
	}
	catch(bad_alloc ex)
	{
		cout<<"inside bad_alloc exception"<<endl;
		cout<<"error message :: "<<ex.what()<<endl;
	}
	catch(...)
	{
		cout<<"inside genric exception"<<endl;

	}


	return 0;

}
