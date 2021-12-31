//metin dizileri yazdırma

#include<stdio.h>
#include<conio.h>

void main()
{
	char *gun[7]={"Pazartesi", "Salı","Çarşamba",
	"Perşembe","Cuma","Cumartesi","Pazar"};
	int i;
	for(i=0;i<7;i++)
		printf("%d. %s\n",i+1,gun[i]);
	getch();
}
