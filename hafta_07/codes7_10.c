//Dizideki tek indisli elemanları farklı bir dizide yazdırma

#include<stdio.h>
int main()
{
	int i,n,sayac;
	int dizi[100],tek[50];
	printf("Eleman sayisi gir>"); scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d eleman:",i);
		scanf("%d",&dizi[i]);
	}
	i=1;
	sayac=1;
	while(i<=n)
	{
		tek[sayac]=dizi[i];
		i+=2;
		sayac++;
	}
	
	for(i=1;i<sayac;i++)
	{
		printf("%d ", tek[i]);
	}
}
