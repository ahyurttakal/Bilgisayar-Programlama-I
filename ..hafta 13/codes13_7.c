//Dosyada kelime aratma

#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
	FILE *f;
	char ara[200], oku[200];
	int sayi=0;
	f=fopen("dosya.txt","r");
	printf("\nAra>");scanf("%s",&ara);
	while(!feof(f))
	{
		fscanf(f,"%s ",oku);
		if(!strcmp(oku,ara))
			sayi++;
	}
	printf("%d tane %s var",sayi,ara);
	fclose(f);
	getch();
}
