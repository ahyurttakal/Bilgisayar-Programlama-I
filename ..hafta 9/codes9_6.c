//2 parametreli örnek fonksiyon tanımlama

#include<stdio.h>
int topla(int,int);
int main()
{
	int toplam, a,b;
	printf("İki sayi giriniz> "); scanf("%d %d",&a,&b);
	toplam=topla(a,b);
	printf("Toplam= %d",toplam);
}
int topla(int x, int y)
{
	int sonuc=x+y;
	return sonuc;
}
