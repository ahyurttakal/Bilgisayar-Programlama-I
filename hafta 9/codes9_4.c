#include<stdio.h>
#define PI 3.14
#undef PI
#define PI 2

int main()
{
	int yaricap;
	float alan, cevre;
	printf("Yaricap giriniz> ",yaricap);
	scanf("%d",&yaricap);
	alan=PI*yaricap*yaricap;
	cevre=2*PI*yaricap;
	printf("%f %f ",alan,cevre);
}
