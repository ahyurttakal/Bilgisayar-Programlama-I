//EOF ile dosyadaki metinleri yazdırma

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
	FILE *f;
	char c;
	f=fopen("dosya.txt","r");
	if(f==NULL)
	{
		printf("Hata");
	}
	else
	{
		do{
			c=fgetc(f);
			putchar(c);
		}while(c!=EOF);
	}
	fclose(f);
}
