//parametre olarak gönderilen dizinin ortalamasını alma

#include<stdio.h>

double ortalama(double dizi[], int n)
{
	double *p,toplam=0.0;
	int i;
	p=dizi;
	for(i=0;i<n;i++)
		toplam+=*(p+i);
	return toplam/n;
}
int main()
{
	double dizi[5]={1.2,2.4,3.2,6.2,4.8};
	double ort;
	ort=ortalama(dizi,5);
	printf("Sonuc= %.2lf",ort);
}
