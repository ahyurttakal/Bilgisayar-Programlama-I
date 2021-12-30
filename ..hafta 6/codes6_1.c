/// Bitsel operatörler

#include<stdio.h>

int main()
{
	int a=25, b=14, c;
	c=a&b;
	printf("%d ", c);
	c=a|b;
	printf("%d ", c);
	c=~a;
	printf("%d ", c);
	c=a<<2;
	printf("%d ", c);
	c=a>>2;
	printf("%d ", c);
	
	printf("%d ", 7&13^11%4*2<<14/4);
}
