//Dizi tanımlamaları

#include<stdio.h>

int main()
{	
  int dizi[3]={10,20,30}; //başlangıçta değer atama
	printf("%d\n", dizi[5]);
	
	int dizi2[5];
	int i;
	for(i=0;i<10;i++) ///değer ataması yapıldı
	{
		dizi2[i]=i+1;
	}
	
	for(i=0;i<10;i++) ///ekrana yazdırma işlemi yapıldı
	{
		printf("%d ",dizi2[i]);
	}
	
	printf("\n");
	
	char dizi3[10]={'M','e','r','h','a','b','a'};
	char dizi4[10]="Ali";
	
	printf("%s %s", dizi3, dizi4); 
}
