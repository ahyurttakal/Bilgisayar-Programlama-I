//   *
//  ***
// *****
//*******


#include<stdio.h>
int main()
{
  int satir,bosluk,yildiz,kat;	
	printf("Sayi giriniz");
	scanf("%d",&kat);
	
	for(satir=1;satir<=kat;satir++)
	{
		for(bosluk=1;bosluk<=kat-satir;bosluk++)
		{
			printf(" ");
		}
		for(yildiz=1;yildiz<=(satir*2)-1;yildiz++)
		{
			printf("*");
		}
		printf("\n");
	}
}
