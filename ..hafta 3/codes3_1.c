#include<stdio.h>

int main()
{
	float vize,final,ort,devam;
	printf("Vize notu giriniz ");
	scanf("%f",&vize);
	printf("Final notu giriniz ");
	scanf("%f",&final);
	printf("Devam giriniz ");
	scanf("%f",&devam);
	ort=vize*0.4+final*0.6;
	if(devam<4)
	{
		if(ort>50)
			printf("Başarılı");
		else
			printf("Nottan kaldı");
	}
	else
	{
		printf("Devamsızlıktan kaldı");		
	}
}
