//Fonksiyonlarda pointer

#include<stdio.h>
 
long topla(long *no1, long *no2)
{
	long toplam;
	toplam=*no1+*no2;
	return toplam;
}
int main()
{
	long ilk,ikinci,toplam;
	printf("İlk sayi gir>");scanf("%ld",&ilk);
	printf("İkinci sayi gir>");scanf("%ld",&ikinci);
	toplam=topla(&ilk,&ikinci); ////Referansla çağırma***
	printf("Sonuc=%d",toplam);	
}
