//Linear Search


#include<stdio.h>
int ara(int dizi[],int n, int x)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(dizi[i]==x)
			return i;
	}
	return -1;	
}
void main()
{
	int dizi[8]={8,14,17,28,32,45,54,68};
	int n=sizeof(dizi)/sizeof(dizi[0]); 
	int x=32;
	int sonuc=ara(dizi,n,x);
	if(sonuc==-1)
		printf("Deger yok");
	else
		printf("Deger var %d. indisde",sonuc);
	
}
