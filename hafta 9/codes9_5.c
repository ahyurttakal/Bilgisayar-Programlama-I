//Makro Fonksiyon

#include <stdio.h>
#include <math.h>
#define topla(x,y) (x+y)
#define hipotenus(x,y) sqrt(x*x+y*y)

int main()
{
	float a=3.0, b=4.0;
	printf("topla(a,b)=%f\n",topla(a,b));
	printf("hipotenus(a,b)=%f\n",hipotenus(a,b));
}
