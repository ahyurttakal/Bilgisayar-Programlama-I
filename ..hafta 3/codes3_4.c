//Klavyeden girilen sayıya kadar çift sayıların toplamı

#include<stdio.h>

int main()
{	
  int sayi,toplam=0;
	printf("Sayı giriniz");
	scanf("%d",&sayi);
	int tekrar=0;
	while(tekrar++<sayi)
	{
		if(tekrar%2==0)
		{
			toplam+=tekrar; //toplam=toplam+tekrar
			printf("Sayı %d\n",tekrar);
		}	
		//tekrar++;
	}
	printf("Toplam %d ",toplam);
}
