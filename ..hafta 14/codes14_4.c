//Struct da dinamik bellek kullanımı

#include<stdio.h>
struct ogr
{
	char adi[50];
	int yasi;
};
int main()
{
	struct ogr *p;
	int i,n;
	printf("Ogr sayisi gir>"); scanf("%d",&n);
	p=(struct ogr*)malloc(n*sizeof(struct ogr*));
	for(i=0;i<n;i++)
	{
		scanf("%s %d",&(p+i)->adi,&(p+i)->yasi);
	}
	for(i=0;i<n;i++)
	{
		printf("%s %d\n",(p+i)->adi,(p+i)->yasi);
	}
}
