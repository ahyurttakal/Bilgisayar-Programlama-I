//Girilen metin içerisinde istenilen harfin  kaç adet geçtiğini bulan kod

#include<stdio.h>
#include<conio.h>

void main()
{
	char ktr[30],harf;
	int i, sayac=0;
	printf("Metin gir>"); gets(ktr);
	printf("Harf gir>"); harf=getche();
	for(i=0;i<30;i++)
		if(ktr[i]==harf)
			sayac++;
	printf("\nMetin içinde %d tane %c harfi vardır",sayac, harf);
	getch();
}
