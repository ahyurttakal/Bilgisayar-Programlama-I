///Klavyeden negatif bir sayı girilene kadar girilen tüm sayıları toplar

#include<stdio.h>
int main()
{		
    int sayi,adet=0,toplam=0;
		for(;;adet++)//sonsuz döngü
		{
			printf("Bir sayı giriniz >");
			scanf("%d",&sayi);
			if(sayi<0) 
        break;
			toplam+=sayi;					
		}
		printf("Adet= %d\n",adet);
		printf("Toplam= %d\n",toplam);
}
