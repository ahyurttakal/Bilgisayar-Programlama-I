//fputc ve fgetc ile dosyaya karakter yazıp okuma

#include<stdio.h>
int main()
{
	FILE *f;
	f=fopen("dosya.txt","w");
	if(f==NULL)
	{
		printf("Hata");
		exit(0);
	}
	int i;
	for(i=0;i<10;i++)
		fputc('a',f);
	fclose(f);
////////////////////////////////////////////////////	
	f=fopen("dosya.txt","r");
	if(f==NULL)
	{
		printf("Hata");
		exit(0);
	}
	for(i=0;i<10;i++)
		printf("%c",fgetc(f));
	fclose(f);
}
