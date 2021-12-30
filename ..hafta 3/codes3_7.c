//Faktöriyel

#include<stdio.h>

int main()
{	
  int sayi, sayac, faktoriyel;
	printf("Sayıyı giriniz");
	scanf("%d",&sayi);
	if(sayi>0)
	{
		for(sayac=sayi;sayac>0;sayac--)
			faktoriyel*=sayac;
		
		printf("Faktöriyel=%d",faktoriyel);
	}
	else
		printf("Negatif olmaz");
}
