//calloc ve realloc kullanımı

#include<stdio.h>
#include<stdlib.h>
void main()
{
	int *p, d;
  //p=(int*)malloc(5*sizeof(int));
	p=(int*)calloc(5,sizeof(int));
	for(d=1;d<=5;d++)
	{
		*(p+d)=d*10;
		printf("%p adresindeki deger=%d\n",(p+d),*(p+d));
	}
	
	p=(int*)realloc(p,10*sizeof(int));
	for(;d<10;d++)
	{
		*(p+d)=d*10;
		printf("%p adresindeki deger=%d\n",(p+d),*(p+d));
	}	
	free(p);
}
