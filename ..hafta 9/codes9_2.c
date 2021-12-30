#include<stdio.h>
#include "tanim.txt"

int main()
{
	printf("Bir sayi gir> ");
	scanf("%d",&sayi);
	if(sayi<0)
	{
		printf("Negatif sayı girdiniz ");
		return yanlis;
	}
	n=sayi;
	while(n>0)
	{
		n/=10;
		b++;
	}
	printf("%d %d basamaklidir ",sayi,b);
}
