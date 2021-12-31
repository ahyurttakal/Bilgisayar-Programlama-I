//Switch-Case Kullanımı

#include<stdio.h>
int main()
{
 	int sayi;
	printf("Sayı giriniz>");
	scanf("%d",&sayi);
	switch(sayi/10){
		case 10:
		case 9: printf("A"); break;
		case 8: printf("B"); break;
		case 7: printf("C"); break;
		case 6: printf("D"); break;
		case 5: 
		case 4: 
		case 3: 
		case 2: printf("F"); break;
		case 1: 
		default: printf("HATA");		
	}
}
