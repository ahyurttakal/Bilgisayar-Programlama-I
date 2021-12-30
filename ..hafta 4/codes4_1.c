//Klavyeden girilen sayıyı tersten yazdıran kod
//Input: 2537 Output: 7352

#include<stdio.h>

int main()
{
	int sayi, tersi;
	printf("Sayıyı giriniz>");
	scanf("%d",&sayi);
	while(sayi>0)
	{
		tersi=sayi%10; //kalan
		printf("%d",tersi);
		sayi=sayi/10; //bölüm
	}

}
