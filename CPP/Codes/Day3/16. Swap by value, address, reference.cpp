#include<iostream>
using namespace std;
//void swap(int n1, int n2); // 1. call by value
//void swap(int *n1, int *n2); // 2. call by address
void swap(int &n1, int &n2); // 3. call by reference
int main(void)
{
	int no1=10, no2=20;

	/*cout<<"before swap in main fun  no1="<<no1<<"   &no1="<<&no1<<"  no2="<<no2<<"   &no2="<<&no2<<endl;
	swap(no1, no2); // 1. call by value
	cout<<"after swap in main fun  no1="<<no1<<"   &no1="<<&no1<<"  no2="<<no2<<"   &no2="<<&no2<<endl;
	cout<<"======================================="<<endl;
	*/

	/*cout<<"before swap in main fun  no1="<<no1<<"   &no1="<<&no1<<"  no2="<<no2<<"   &no2="<<&no2<<endl;
	swap(&no1, &no2); // 2. call by address
	cout<<"after swap in main fun  no1="<<no1<<"   &no1="<<&no1<<"  no2="<<no2<<"   &no2="<<&no2<<endl;
	cout<<"======================================="<<endl;
	*/
	cout<<"before swap in main fun  no1="<<no1<<"   &no1="<<&no1<<"  no2="<<no2<<"   &no2="<<&no2<<endl;
	swap(no1, no2); // 3. call by reference
	cout<<"after swap in main fun  no1="<<no1<<"   &no1="<<&no1<<"  no2="<<no2<<"   &no2="<<&no2<<endl;
	cout<<"======================================="<<endl;


	return 0;
}
// 1. call by value
/*void swap(int n1, int n2)
{
	int temp=0;
	cout<<"before swap in swap fun  n1="<<n1<<"   &n1="<<&n1<<"  n2="<<n2<<"   &n2="<<&n2<<endl;

	temp=n1;
	n1=n2;
	n2=temp;
	cout<<"after swap in swap fun  n1="<<n1<<"   &n1="<<&n1<<"  n2="<<n2<<"   &n2="<<&n2<<endl;
}*/
// // 2. call by address
/*void swap(int *n1, int *n2)
{
	int temp=0;
	cout<<"before swap in swap call by address fun  *n1="<<*n1<<"   n1="<<n1<<"  *n2="<<*n2<<"   n2="<<n2<<endl;
	temp=*n1;
	*n1=*n2;
	*n2=temp;
	cout<<"after swap in swap call by address fun  *n1="<<*n1<<"   n1="<<n1<<"  *n2="<<*n2<<"   n2="<<n2<<endl;

}*/

// 3. call by reference
// n1 is reference of no1 ,n2 is reference of no2
void swap(int &n1, int &n2)
{
	int temp=0;
	cout<<"before swap in swap fun  n1="<<n1<<"   &n1="<<&n1<<"  n2="<<n2<<"   &n2="<<&n2<<endl;
	temp=n1;
	n1=n2;
	n2=temp;
	cout<<"after swap in swap fun  n1="<<n1<<"   &n1="<<&n1<<"  n2="<<n2<<"   &n2="<<&n2<<endl;
}

