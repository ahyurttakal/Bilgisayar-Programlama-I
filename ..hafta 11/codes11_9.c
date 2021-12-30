//strchr ve strchrr fonksiyonları kullanımı

#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
	char metin[50],ara,*ilk,*son;
	printf("Metin gir>"); scanf("%s",metin);
	printf("Harf gir>"); ara=getch();
	ilk=strchr(metin,ara);
	son=strrchr(metin,ara);
	printf("%s \n",ilk);
	printf("İlk %d",ilk-metin+1);
	printf("Son %d",son-metin+1);
}
