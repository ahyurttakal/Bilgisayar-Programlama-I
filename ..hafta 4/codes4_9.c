// Sonsuz döngü

#include<stdio.h>

int main()
{
  int sayi;	
	do{
		printf("Sayıyı giriniz ");
		scanf("%d",&sayi);
		if(sayi>10 || sayi<0)
			printf("Uygun değildir");
		else
			break;
	}while(1);
}
