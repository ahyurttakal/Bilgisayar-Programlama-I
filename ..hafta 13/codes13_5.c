//Dosyaya string yazdırma

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	FILE *f;
	char dizi[200]={"Afyon Kocatepe"};
	f=fopen("dosya.txt","w");
	if(f==NULL)
	{
		printf("Hata");
	}
	fputs("Başarılar\n",f);
	fputs(dizi,f);
	fclose(f);
	getch();
}
