//Örnek struct tanımlaması 2

#include<stdio.h>
struct uzaklik
{
	int km;
	float m;
};
int main()
{
	struct uzaklik a1,a2,toplam;
	printf("A1 Uzaklik\n");
	printf("Km gir"); scanf("%d",&a1.km);
	printf("M gir"); scanf("%f",&a1.m);	
	printf("A2 Uzaklik\n");
	printf("Km gir"); scanf("%d",&a2.km);
	printf("M gir"); scanf("%f",&a2.m);	
	toplam.km=a1.km+a2.km;
	toplam.m=a1.m+a2.m;
	printf("Toplam km=%d m=%f",toplam.km,toplam.m);
}
