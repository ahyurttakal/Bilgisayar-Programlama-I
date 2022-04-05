//Klavyeden girilerek oluşturulan dizide en küçük sayıyı ve indisini bulan kod

#include<stdio.h>

int main()
{
  int i,n,enk,indis;
	int dizi[5];
	printf("Boyut giriniz >");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("%d. indisdeki deger= ",i);
		scanf("%d",&dizi[i]);
	}
/////////////////////////////////////////	
	enk=dizi[0];
	indis=0;
	for(i=0;i<n;i++)
	{
		if(enk>dizi[i])
		{
			enk=dizi[i];
			indis=i;
		}		
	}
	printf("Deger=%d İndis=%d ",enk,indis);
}
