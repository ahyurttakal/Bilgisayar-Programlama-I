#include<stdio.h>
#include "kombinasyon.h"

void main()
{
	long int i;
	for(i=0;i<=10;i++)
	{
		printf("%ld! = %ld",i,faktoriyel(i));
		printf("\t\t");
		printf("C(10,%ld) = %ld\n", i,C(10,i));
	}
}
