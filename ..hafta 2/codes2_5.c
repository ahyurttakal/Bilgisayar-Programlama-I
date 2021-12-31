#include <stdio.h>
void main()
{
	int a,b,c;
	printf("Sayıları giriniz ");
	scanf("%d%d%d",&a,&b,&c);
	if(a>=b)
	{
		if(a>=c)
			printf("En büyük sayı %d",a);
		else
			printf("En büyük sayı %d",c);
	}
	else 
	{
		if(b>=c)
			printf("En büyük sayı %d",b);
		else
			printf("En büyük sayı %d",c);
	}
}
