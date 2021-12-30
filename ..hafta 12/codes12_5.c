//Recursive Binary Search

#include<stdio.h>
int ara(int dizi[],int bas, int son, int x)
{
	if(son>=bas)
	{
		int orta=bas+(son-bas)/2;
		if(dizi[orta]==x)
			return orta;
		else if(dizi[orta]>x)
			return ara(dizi,bas,orta-1,x);
		else
			return ara(dizi,orta+1,son,x);
	}
	return -1;
}
void main()
{
	int dizi[8]={8,14,17,28,32,45,54,68};
	int n=sizeof(dizi)/sizeof(dizi[0]); 
	int x=32;
	int sonuc=ara(dizi,0,n,x);
	if(sonuc==-1)
		printf("Deger yok");
	else
		printf("Deger var %d. indisde",sonuc);
	
}
