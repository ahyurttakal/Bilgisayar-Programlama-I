#include<stdio.h>
#define km *1000
#define saat *3600

int main()
{
	double yol, zaman, hiz;
	printf("Yol giriniz> ");
	scanf("%lf",&yol);
	printf("Zaman giriniz> ");
	scanf("%lf",&zaman);
	hiz=(yol km)/(zaman saat);
	printf("%lf m/s", hiz);
}
