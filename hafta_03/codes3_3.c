#include<stdio.h>

int main()
{  
  int sayi,x;
	printf("Sayı giriniz>");
	scanf("%d",&sayi);
	//(sayi%2==0)?printf("Cift"):printf("Tek");	
	x=(sayi%2==0)?(sayi<10)?sayi/2:sayi:sayi*sayi;
	printf("%d",x);
}
