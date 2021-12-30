#include<stdio.h>

int main()
{
	float vize,final,ort,devam;
	printf("Vize notu giriniz ");
	scanf("%f",&vize);
	printf("Final notu giriniz ");
	scanf("%f",&final);
	printf("Devam giriniz ");
	scanf("%f",&devam);
	ort=vize*0.4+final*0.6;
	if(devam<4)
	{
		if(ort>50)
			printf("Başarılı");
		else
			printf("Nottan kaldı");
	}
	else
	{
		printf("Devamsızlıktan kaldı");		
	}
/////////////////////////////////////
	int sayi;
	printf("Sayı giriniz>");
	scanf("%d",&sayi);
	switch(sayi/10){
		case 10:
		case 9: printf("A"); break;
		case 8: printf("B"); break;
		case 7: printf("C"); break;
		case 6: printf("D"); break;
		case 5: 
		case 4: 
		case 3: 
		case 2: printf("F"); break;
		case 1: 
		default: printf("HATA");		
	}
////////////////////////////////////////	
	int sayi,x;
	printf("Sayı giriniz>");
	scanf("%d",&sayi);
	x=(sayi%2==0)?(sayi<10)?sayi/2:sayi:sayi*sayi;
	printf("%d",x);
/////////////////////////////////////////	
	int sayi,toplam=0;
	printf("Sayı giriniz");
	scanf("%d",&sayi);
	int tekrar=0;
	while(tekrar++<sayi)
	{
		if(tekrar%2==0)
		{
			toplam+=tekrar; //toplam=toplam+tekrar
			printf("Sayı %d\n",tekrar);
		}	
		//tekrar++;
	}
	printf("Toplam %d ",toplam);
////////////////////////////////////////	
	int sayi1,sayi2,toplam=0;
	char dvm;
	do{
		printf("Birinci sayıyı giriniz");
		scanf("%d",&sayi1);
		printf("İkinci sayıyı giriniz");
		scanf("%d",&sayi2);
		toplam=sayi1+sayi2;
		printf("Toplam= %d",toplam);		
		printf("\n");
	    printf("Devam etmek ister misiniz?");	   
	    do{
	    	scanf("%c",&dvm);
		}while(dvm=='\n');
		
	}while(dvm =='E' || dvm =='e');
//////////////////////////////////////////////
	int sayi,toplam=0;
	printf("sayıyı giriniz");
    scanf("%d",&sayi);
	for(int sayac=0;sayac<=sayi;sayac++)
	{
		if(sayac%2!=0)
		{
			toplam+=sayac*sayac;
			printf("%d\n",sayac);
		}	
				
	}
	printf("Toplam =%d",toplam);
//////////////////////////////////////////
	int sayi, sayac, faktoriyel;
	printf("Sayıyı giriniz");
	scanf("%d",&sayi);
	if(sayi>0)
	{
		for(sayac=sayi;sayac>0;sayac--)
			faktoriyel*=sayac;
		
		printf("Faktöriyel=%d",faktoriyel);
	}
	else
		printf("Negatif olmaz");
}
