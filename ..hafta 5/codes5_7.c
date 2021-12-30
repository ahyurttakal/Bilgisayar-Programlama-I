//Armstrong

#include<stdio.h>
int main()
{
	int sayi, toplam=0, basamak, ilk;
	printf("Bir sayı giriniz >");
	scanf("%d",&sayi);
	ilk=sayi;
	while(sayi>0)
	{
		basamak=sayi%10;
		toplam=(toplam)+basamak*basamak*basamak;
		sayi=sayi/10;
	}
	printf("İlk= %d, Toplam= %d\n", ilk, toplam);
	
	if(ilk==toplam)
		printf("Armstrong");
	else
		printf("Değil");
