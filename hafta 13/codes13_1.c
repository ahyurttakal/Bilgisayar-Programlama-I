//fprintf-fscanf fonksiyonları ile dosyaya rakam yazıp okuma

#include<stdio.h>

void main()
{
	FILE *f;
	int x;
	f=fopen("dosya.txt","w");
	if(f==NULL)
	{
		printf("Hata");
		exit(0);
	}
	printf("Sayi gir>");
  scanf("%d",&x);
	fprintf(f,"%d",x); ///dosya.txt dosyasına sayıyı yazdı
	fclose(f);
///////////////////////////////////////////////////////////	
	f=fopen("dosya.txt","r");
	if(f==NULL)
	{
		printf("Hata");
		exit(0);
	}
	fscanf(f,"%d",&x);
	printf("Deger=%d",x);
	fclose(f);
	
}
