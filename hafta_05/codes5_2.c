//Yuvarlama

#include<stdio.h>
int main()
{	
  float ondalik, fsayi;
	int tam;
	printf("Bir sayi giriniz");
	scanf("%f",&fsayi);
	tam=fsayi; //float-->integer
	ondalik=fsayi-tam;
	if(ondalik<0.5)
		printf("Sayı= %d",tam);
	else
		printf("Sayı= %d",++tam);
}
