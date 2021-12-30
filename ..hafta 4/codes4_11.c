//Asal mı?

#include<stdio.h>
int main()
{  
  int sayi,i;
	int asal=0;
	printf("Bir sayı giriniz ");
	scanf("%d",&sayi);	
	for(i=2;i<=sayi/2;i++)
	{
		if(sayi%i==0){
			asal=1;
			break;
		}
	}
	if(asal==0)
		printf("Asal");
	else
		printf("Degil");	
}
