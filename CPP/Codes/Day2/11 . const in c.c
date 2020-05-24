#include <stdio.h>

//case 1
/*
int main(void)
{
	float pj=10.2;
	cons`		t float pi=3.142;
	float *ptr= &pi;
//	pi=3.13;  error as pi is const
//	pi++;
//	++pi;
//	--pi;
//	pi--;
//	pi+=1;
//	pi-=1;
//	pi*=1;
//	pi/=1;

	printf("\n pi=%.2f *ptr=%.2f", pi, *ptr);
	*ptr=3.13; // allowed as value of pointer is not const
	printf("\n pi=%.2f *ptr=%.2f", pi, *ptr);

	ptr=&pj;
	printf("\n pj=%.2f *ptr=%.2f", pj, *ptr);

	return 0;
}
*/

//case 2
/*
int main(void)
{
	float pj=10.2;
	const float pi=3.142;
	//const float *ptr= &pi; // value of pointer is const
	float const  *ptr= &pi;

	//pi=3.13;
	printf("\n pi=%.2f *ptr=%.2f", pi, *ptr);
	//*ptr=3.13; //error as value of ptr is const

	ptr=&pj;

	printf("\n pj=%.2f *ptr=%.2f", pj, *ptr);


	return 0;
}
*/
//case3
/*
int main(void)
{
	float pj=10.2;
	const float pi=3.142;

	float * const ptr= &pi; // address of pointer is const

	//pi=3.13; error
	printf("\n pi=%.2f *ptr=%.2f", pi, *ptr);
	*ptr=3.13; //allowed as value of ptr is not const

	//ptr=&pj; // error as address of ptr is const

	printf("\n pj=%.2f *ptr=%.2f", pj, *ptr);


	return 0;
}
*/

//case4
int main(void)
{
	float pj=10.2;
	const float pi=3.142;
	//float const * const ptr= &pi;
	const float * const ptr= &pi; // address of pointer is const
	//and value of ptr is also const

	//pi=3.13; error pi is const
	//*ptr=3.13; //error as value of ptr is const
	//ptr=&pj; // error as address of ptr is const

	return 0;
}
