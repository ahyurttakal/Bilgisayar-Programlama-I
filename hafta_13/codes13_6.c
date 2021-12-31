//Dosyadan string okuma

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	FILE *f;
	char dizi2[2000];
	f=fopen("dosya.txt","r");
	if(f==NULL)
	{
		printf("Hata");
	}
	fgets(dizi2,2000,f);
	printf("%s",dizi2);
	fclose(f);
	getch();
}
