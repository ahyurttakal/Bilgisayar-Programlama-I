//Aritmatik ort ve Geometrik ort

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void main()
{
	int n,i,toplam=0,tut;
	float aort,gort,carpim=1,us;
	printf("Eleman sayisi="); scanf("%d",&n);
	int *elemanlar=(int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
		*(elemanlar+i)=rand();
	for(i=0;i<n;i++)
	{
		toplam+=*(elemanlar+i);
		printf("%d.sayi: %d",i+1,*(elemanlar+i));
	}
	aort=toplam/n;
	
	for(i=0;i<n;i++)
	{
		carpim*=*(elemanlar+i);
	}
	us=(float)1/n;
	gort=pow(carpim,us);
	printf("Aort=%f",aort);
	printf("Gort=%f",gort);
}
