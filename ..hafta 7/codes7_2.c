#include<stdio.h>

int main()
{	
  int i,n, toplam=0;
	int dizi[5];
	printf("İlk sayi gir>");
	scanf("%d",&dizi[0]);
	printf("İkinci sayi gir>");
	scanf("%d",&dizi[1]);
	toplam=dizi[0]+dizi[1];
	printf("Toplam=%d",toplam);
}
