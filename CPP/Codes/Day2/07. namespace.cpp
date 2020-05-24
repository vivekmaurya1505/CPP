#include<stdio.h>
int no1=100;

namespace N1
{
	int no1=500;
	int no2=250;
	int no3=700;
} // namespace ends with }
// N1::no1
namespace N2
{
	namespace N3
	{
		int no1=1000;
		int no5;
	}
} // N2::N3::no1

using namespace N1;
using namespace N2::N3;
int main(void)
{
	int no1=50;
	printf("\n no1=%d [%u] local variable", no1, &no1);
	printf("\n ::no1=%d [%u] global variable", ::no1, &::no1);

	// namespacename::variablename
	printf("\n N1::no1=%d [%u] variable from N1 namespace", N1::no1, &N1::no1);
	printf("\n N1::no2=%d [%u] variable from N1 namespace", N1::no2, &N1::no2);
	//using namespace N1;
	printf("\n using no2=%d [%u] variable from N1 namespace", no2, &no2);
	printf("\n no1=%d [%u] variable", no1, &no1);
	printf("\n using no3=%d [%u] variable from N1 namespace", no3, &no3);

	printf("\n N2::N2::no1=%d [%u] variable from namepsace N2::N3::no1", N2::N3::no1, &N2::N3::no1);
	printf("\n N2::N2::no5=%d [%u] variable from namepsace N2::N3::no5", N2::N3::no5, &N2::N3::no5);


	//using namespace N2::N3;
	//using namespace N2;
	//using namespace N3;

	printf("\n no5=%d [%u] variable from namepsace N2::N3::no5", no5, &no5);
	printf("\n no1=%d [%u] variable loacl", no1, &no1);

	return 0;

}

