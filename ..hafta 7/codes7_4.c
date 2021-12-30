#include<stdio.h>

int main()
{	
  int i,n,dizi[10],toplam=0;
	printf("Boyut giriniz >");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("%d. indisdeki deger= ",i);
		scanf("%d",&dizi[i]);
	}
	for(i=0;i<n;i++)
	{
		toplam+=dizi[i];
	}
	printf("Toplam=%d ",toplam);
}
