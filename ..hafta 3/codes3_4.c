//Klavyeden girilen sayıya kadar çift sayıların toplamı

#include<stdio.h>

int main()
{	
  	int sayi,toplam=0;
	printf("Sayı giriniz");
	scanf("%d",&sayi);
	int sayac=0;
	while(sayac++<sayi)
	{
		if(sayac%2==0)
		{
			toplam+=sayac; //toplam=toplam+tekrar
			printf("Sayı %d\n",sayac);
		}	
		//sayac++;
	}
	printf("Toplam %d ",toplam);
}
