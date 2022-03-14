//Klavyeden girilen sayıya kadar çift sayıların toplamı

#include<stdio.h>

int main()
{	
  	int sayi,toplam=0;
	printf("Sayı giriniz");
	scanf("%d",&sayi);
	int sayac=0;
	while(sayac++<sayi)
	{
		if(sayac%2==0)
		{
			toplam+=sayac; //toplam=toplam+tekrar
			printf("Sayı %d\n",sayac);
		}	
		//sayac++;
	}
	printf("Toplam %d ",toplam);
	
//	int sayi, toplam=0;
//	printf("Sayi gir> \n"); scanf("%d",&sayi);
//	int i;
//	for(i=0;i<=sayi;i++)
//	{
//		if(i%2==0)
//		{
//			toplam=toplam+i; //toplam+=i;
//			printf("Sayi=%d \n",i);
//		}
//			
//	}
//	printf("Toplam=%d",toplam);
}
