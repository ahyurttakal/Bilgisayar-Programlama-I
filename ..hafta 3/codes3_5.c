//Do-while örneği, klavyeden e-E dışında karakter basana dek toplama işlemi devam eder.

#include<stdio.h>

int main()
{
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
}
