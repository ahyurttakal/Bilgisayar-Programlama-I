//Klavyeden girilen en boy değerine göre dikdörtgen çizdirme

#include<stdio.h>
void kutu(int satir,int sutun)
{
	int i;
	for(;satir>0;satir--)
	{
		for(i=sutun;i>0;i--)
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
