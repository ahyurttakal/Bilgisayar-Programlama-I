///Bir kütüphanenin çalýþmasýný gösteren menü odaklý
//bir program yazýnýz. Menüler þunlardýr:
//1.Kitap bilgileri girin(kitapno, fiyat, kitapadi, yazaradi)
//2.Klavyeden girilen kitabý aratýn ve fiyatýný 10TL artýrýn
//3.Tüm kitap bilgilerini gösterin
//4.Kitap sayýsýný gösterin
//5.Çýkýþ

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
int adet;
struct lib
{
	int kitapno;
	float fiyat;
	char kitapadi[50];
	char yazaradi[50];
}c[10];

void ekle()
{
	if(adet==9)
	{
		printf("\nDolu\n");
	}
	else
	{
		printf("\nKitap bilgisi gir>\n ");
		printf("Kitap ID gir> "); scanf("%d",&c[adet].kitapno);
		printf("Kitap Adi gir> "); scanf("%s",&c[adet].kitapadi);
		printf("Yazar Adi gir> ");scanf("%s",&c[adet].yazaradi);           
		printf("Fiyat gir> "); scanf("%f",&c[adet].fiyat);
		adet++;		
	}
}
void ara()
{
	int i,sayi=0;
	char kitap[20];
	printf("Aranacak kitap gir>");scanf("%s",&kitap);
	for(i=0;i<adet;i++)
	{
		if(strcmp(kitap,c[i].kitapadi)==0)
		{
			sayi++;
			printf("\n......................\n");
			printf("Kitap ID=%d",c[i].kitapno);
			printf("Kitap Adi=%s",c[i].kitapadi);
			c[i].fiyat+=10;
			printf("Kitap Fiyati=%.2f",c[i].fiyat);
			printf("Yazar Adi=%s",c[i].yazaradi);
		}
		else if(sayi==0)
		{
			printf("\nKitap bulunamadi\n");
		}
	}
}
void goster()
{
	int i;
	printf("\nTUM KITAPLAR\n");
	for(i=0;i<adet;i++)
	{
		printf("\n........................\n");
		printf("Kitap ID=%d",c[i].kitapno);
		printf("Kitap Adi=%s",c[i].kitapadi);
		printf("Kitap Fiyati=%.2f",c[i].fiyat);
		printf("Yazar Adi=%s",c[i].yazaradi);
	}
}
v+oid say()
{
	printf("Kitap sayisi=%d",adet);
}
void main()
{
	int i;
	printf("\n.......................\n");
	printf("\nKUTUPHANE SISTEMI\n");
	printf("\n.......................\n");
	while(1)
	{
		printf("1.Kitap bilgisi giriniz>\n");
		printf("2.Kitap Ara>\n");
		printf("3.Tüm kitaplari goster>\n");
		printf("4.Kitap sayisini goster>\n");
		printf("5.Cikis>\n");
		scanf("%d",&i);
		switch(i)
		{
			case 1:
				ekle();
				getch();
				break;
			case 2:
				ara();
				getch();
				break;
			case 3:
				goster();
				getch();
				break;
			case 4:
				say();
				getch();
				break;
			case 5:
				exit(0);
				getch();
				break;
			default: 
				printf("Hatali giris");
				break;
		}
	}
}

