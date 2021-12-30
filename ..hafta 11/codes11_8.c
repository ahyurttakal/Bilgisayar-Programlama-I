// strcat, strcmp, strstr fonksiyon kullanımları

#include<stdio.h>
#include<string.h>
int main()
{
	char dizi1[100];
	char dizi2[100];
	
	printf("dizi1="); gets(dizi1);
	printf("dizi2="); gets(dizi2);
	
	strcat(dizi1,dizi2);
	printf("dizi1=%s",dizi1);
	
  int durum=strcmp(dizi1,dizi2);
	if(durum==0)
		printf("Aynı");
	else
		printf("Farklı");

	char *sonuc;
	sonuc=strstr(dizi1,dizi2);
	
	if(sonuc=='\0')
		printf("Bulunmadı");
	else
		printf("%c",*sonuc);
	
	
}
