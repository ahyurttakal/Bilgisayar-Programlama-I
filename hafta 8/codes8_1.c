#include<stdio.h>

int main()
{
	/////////////////1. Soru cevabı
	int n,sayac=0,a=1,b=1,c;
	printf("Bir deger giriniz> ");
	scanf("%d",&n);
	while(sayac<n)
	{
		c=a+b;
		a=b;
		b=c;
		sayac++;
		printf("%d ",c);
	}
	printf("\n");
	////////////////2. Soru cevabı
	int i,j;
	for(i=1;i<=n;i++)
	{
		for(j=0;j<i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(i=n;i>=0;i--)
	{
		for(j=0;j<i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	////////////////3. Soru cevabı
	int dizi[10], enb, enk;
	for(i=0;i<5;i++)
	{
		printf("%d. sayi=",i);
		scanf("%d",&dizi[i]);
	}
	enb=dizi[0];
	for(i=0;i<5;i++)
	{
		if(enb<dizi[i])
		{
			enb=dizi[i];
		}
	}
	enk=dizi[0];
	for(i=0;i<5;i++)
	{
		if(enk>dizi[i])
		{
			enb=dizi[i];
		}
	}
	printf("Enb=%d Enk=%d ",enb,enk);	
}
