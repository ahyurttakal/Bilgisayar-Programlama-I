//Klavyeden girilen en boy değerine göre dikdörtgen çizdirme

#include<stdio.h>
void kutu(int satir,int sutun)
{
	int i,j;
	for(i=satir;i>0;i--)
	{
		for(j=sutun;j>0;j--)
			printf("*");
		printf("\n");
	}
}
int main()
{
	int en,boy;
	printf("En giriniz>"); scanf("%d",&en);
	printf("Boy giriniz>"); scanf("%d",&boy);
	kutu(en,boy);
}
