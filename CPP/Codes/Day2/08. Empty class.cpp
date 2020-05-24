#include<stdio.h>

struct empty
{
}; //struct end with ;
class Empty
{
}; // class Ends with ;

int main(void)
{
	Empty e1;
	empty e2;

	printf("\n size of empty class obejct e1=%d",sizeof(e1));
	printf("\n size of empty struct obejct e2=%d",sizeof(e2));

	printf("\n &e1=%u  &e2=%u", &e1, &e2);
	//printf("\n &Empty=%u  &empty=%u", &Empty, &empty); // error


	return 0;

}

