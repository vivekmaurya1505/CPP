#include<stdio.h>
#define sq(a) a*a
inline void display()
{
	printf("\n hellow ");
}
int main(void)
{
	int x=5, y=0;
	y= sq(x); // y=x*x = y=5*5==25
	printf("x=%d y=%d", x, y);

	y= sq(x+x); // y=x+x *x+x == y== 5+5*5+5 // y=5+25+5 ==35
	printf("\n x=%d y=%d", x, y);

	y= 25/sq(x); // y=25/x*x // t== y=25/5*5 //y=5*5==25
	printf("\n x=%d y=%d", x, y);

	display(); //
	/*{
		printf("\n hellow ");
	}*/
	return 0;

}
//  g++ -E -o Demo1.i Demo1.cpp


