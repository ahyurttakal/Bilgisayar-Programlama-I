//Klavyeden girilen sayının, sayı değerleri toplamı

#include<stdio.h>
#include<conio.h>
int main()
{
	int sayi, toplam=0, basamak, ilk;
	printf("Bir sayı giriniz >");
	scanf("%d",&sayi);
	ilk=sayi;
	while(sayi>0)
	{
		basamak=sayi%10;
		sayi=sayi/10;
		toplam+=basamak;
	}
	printf("İlk= %d, Toplam= %d\n", ilk, toplam);
	getch();
}
