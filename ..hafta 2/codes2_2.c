#include <stdio.h>

void main()
{
	int sayi;
	printf("Lütfen bir sayı giriniz");
	scanf("%d",&sayi);
	if(sayi>=100)
		printf("Girilen sayı 100'den büyüktür.");
	else
		printf("Girilen sayı 100'den küçüktür");
}

