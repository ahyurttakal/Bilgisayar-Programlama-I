//İki değişkenin yerini değiştirir misiniz? 
//(3. bir değişken tanımlayarak ve 3. değişken tanımlamadan)

#include <stdio.h>
void main()
{
	int a, b, yedek;
	printf("a gir>"); scanf("%d",&a);
	printf("b gir>"); scanf("%d",&b);
	printf("Baslangic a=%d b=%d\n",a,b);
	
	yedek=a;
	a=b;
	b=yedek;
	printf("1. yontem a=%d b=%d\n",a,b);
	///////////////////////////
	a=a+b;
	b=a-b;
	a=a-b;
	printf("2. yontem a=%d b=%d\n",a,b);
	
}
