//Malloc kullanım örnekleri

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
	int *p;
	p=(int*)malloc(sizeof(int));
	*p=160;
	printf("Adres=%p Deger=%d\n",p,*p);
	free(p);
///////////////////////////////////
  char *cp;
	cp = (char*) malloc(40);
  if (cp==NULL) 
  {
      printf("Bellek tahsis hatası!");
	}
	strcpy(cp, "Bilgisayar");
	printf("%s, %p", cp, &cp);
	free(cp);
	
	char *cp1, *cp2;
	char dizi[20];
	cp1="Birinci metin";
	cp2=(char*)malloc(sizeof(char));
	strcpy(cp2,"İkinci metin");
	strcpy(dizi,"Üçüncü metin");
	printf("%s, %s, %s", cp1, cp2, dizi);
	free(cp2);
}
