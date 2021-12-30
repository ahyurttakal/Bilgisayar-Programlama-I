//dosya girilen harften kaç olduğunu aratma

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
	char ara;
	int sayi;
	f=fopen("dosya.txt","r");
	printf("\nAra>");scanf("%c",&ara);
	while(!feof(f))
	{
		if(ara==fgetc(f))
			sayi++;
	}
	printf("%d tane %c var",sayi,ara);
	getch();
}
