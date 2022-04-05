//Girilen diziyi tersten yazdıran 

#include<stdio.h>

int main()
{	
  int i,n,yedek;
	int dizi[5];
	printf("Boyut giriniz >");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("%d. indisdeki deger= ",i);
		scanf("%d",&dizi[i]);
	}
	
	for(i=0;i<n/2;i++)
	{
		yedek=dizi[i];
		dizi[i]=dizi[n-i-1];
		dizi[n-i-1]=yedek;
	}
	
	for(i=0;i<n;i++) ///ekrana yazdırma işlemi yapıldı
	{
		printf("%d ",dizi[i]);
	}
}
