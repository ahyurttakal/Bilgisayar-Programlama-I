//Struct da ointer kullanımı

#include<stdio.h>
struct kisi
{
	int yas;
	float kilo;
};
int main()
{
	struct kisi *p, kisi1;
	p=&kisi1;
	printf("Yas gir>"); 
	//scanf("%d",&kisi1.yas); ////1.yol
	scanf("%d",&p->yas); ////2.yol
	printf("Kilo gir>"); 
	//scanf("%f",&kisi1.kilo); //1.yol
	scanf("%f",&p->kilo); //2.yol
	
	printf("Yas=%d Kilo=%f",p->yas,p->kilo);
}
