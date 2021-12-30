//3 basamaklı sayıyı yazıyla yazar

#include<stdio.h>
int main()
{  
  int sayi;
	printf("sayı giriniz >");
	scanf("%d",&sayi);
	switch(sayi/100){
		case 9: printf("dokuzyuz "); break;	
		case 8: printf("sekizyuz "); break;
		case 7: printf("yediyuz "); break;
		case 6: printf("altiyuz "); break;
		case 5: printf("besyuz "); break;
		case 4: printf("dortyuz "); break;
		case 3: printf("ucyuz "); break;
		case 2: printf("ikiyuz "); break;	
		case 1: printf("yuz "); break;	
	}
	
		switch((sayi%100)/10){
		case 9: printf("doksan "); break;	
		case 8: printf("seksen "); break;
		case 7: printf("yetmis "); break;
		case 6: printf("altmis "); break;
		case 5: printf("elli "); break;
		case 4: printf("kirk "); break;
		case 3: printf("otuz "); break;
		case 2: printf("yirmi "); break;	
		case 1: printf("on "); break;	
	}
	
		switch(sayi%10){
		case 9: printf("dokuz "); break;	
		case 8: printf("sekiz "); break;
		case 7: printf("yedi "); break;
		case 6: printf("alti "); break;
		case 5: printf("bes "); break;
		case 4: printf("dort "); break;
		case 3: printf("uc "); break;
		case 2: printf("iki "); break;	
		case 1: printf("bir "); break;	
	}
}
