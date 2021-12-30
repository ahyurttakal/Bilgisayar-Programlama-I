//Fibonacci Serisi

#include<stdio.h>
int main()
{
  int a=0, b=1, c, n, i;
	printf("sayı giriniz >");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("%d . eleman= %d\n",i,c);
		c=a+b;
		a=b;
		b=c;
	}
}
