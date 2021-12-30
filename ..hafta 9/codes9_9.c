//Para bozdurma problemi

#include<stdio.h>
#define para 7
#define max 20
int parabirimi[para]={1,5,10,20,50,100,200};
int minbul(int);
int main()
{
	int miktar;
	printf("Para miktarı giriniz >"); scanf("%d",&miktar);
	minbul(miktar);
	return 0;
}
int minbul(int deger)
{
	int i,j=0;
	int paralistesi[max]={0};
	for(i=para-1;i>=0;i--)
	{
		while(deger>=parabirimi[i])
		{
			deger-=parabirimi[i];
			paralistesi[j]=parabirimi[i];
			j++;
		}
	}
	for(i=0;i<j;i++)
	{
		printf("%d ",paralistesi[i]);
	}
	
}
