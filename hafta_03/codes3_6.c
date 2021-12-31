//Klavyeden girilen sayıya kadar tek sayıların karelerinin toplamı

#include<stdio.h>

int main()
{
  	int sayi,sayac,toplam=0;
	printf("sayıyı giriniz");
    	scanf("%d",&sayi);
	for(sayac=0;sayac<=sayi;sayac++)
	{
		if(sayac%2!=0)
		{
			toplam+=sayac*sayac;
			printf("%d\n",sayac);
		}	
				
	}
	printf("Toplam =%d",toplam);
}
