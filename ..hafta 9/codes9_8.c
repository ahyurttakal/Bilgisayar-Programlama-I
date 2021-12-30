#include<stdio.h>
int fak(int n)
{
	int sonuc;
	if(n<1 || n==1)
		return 1;
	else
		sonuc=fak(n-1)*n;
	return sonuc;
}
int main()
{
	long int sayi,faktor;
	printf("Sayi gir> "); scanf("%d",&sayi);
	faktor=fak(sayi);
	printf("%d ",faktor);
}
