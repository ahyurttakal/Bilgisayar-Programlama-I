#include <stdio.h>
void main()
{
	int a,b,c;
	printf("Sayıları giriniz ");
	scanf("%d%d%d",&a,&b,&c);
	if(a>=b && a>=c)
		printf("En büyük sayı %d",a);
	else if(b>=a && b>=c)
		printf("En büyük sayı %d",b);
	else 
		printf("En büyük sayı %d",c);
 }
