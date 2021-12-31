#include <stdio.h>
void main()
{  
  int sayi;
	printf("Lütfen bir sayı giriniz");
	scanf("%d",&sayi);
	if(sayi>=30 && sayi<=50)
		printf("Girilen sayı 30-50 arasındadır");
	else if(sayi<30)
		printf("Girilen sayı 30'dan küçüktür");
	else
		printf("Girilen sayı 50'den büyüktür");
}
