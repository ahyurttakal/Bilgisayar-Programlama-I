#include <stdio.h>
int main() 
{
	///+=, -=, *=, /= işlem ve atama
	int a=1, b=-1, c=0;
	if(b) 
	{
		a+=5; //a=a+5;
		printf("a degeri=%d",a);
	}
	else
	{
		a*=5; //a=a*5;
		printf("a degeri=%d",a);
	}	
}
