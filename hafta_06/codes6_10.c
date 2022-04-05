//Klavyeden girilen bir sayıya en yakın dizideki elemanı ve aradaki farkı gösteren kod

#include<stdio.h>
#include<math.h>
int main()
{
	int i,j,n,x,enk,s;
	int dizi[10];
	printf("Eleman sayisi gir>"); scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d eleman:",i);
		scanf("%d",&dizi[i]);
	}
	
	printf("X>:"); scanf("%d",&x);
	enk=abs(dizi[0]-x);
	s=dizi[0];
	for(i=1;i<=n;i++)
	{
		if(enk>abs(dizi[i]-x))
		{
			enk=abs(dizi[i]-x);
			s=dizi[i];
		}
	}
	printf("En yakin eleman=%d Fark=%d", s,enk);
}
