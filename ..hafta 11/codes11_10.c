//strcpy, strcmp kullanımları 

#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	char isim1[10], isim2[10], karisik[20];
	strcpy(isim1,"Konya");
	strcpy(isim2,"İsparta");
	if(strcmp(isim1,isim2)>0)
		strcpy(karisik,isim1);
	else
		strcpy(karisik,isim2);
	printf("%s",karisik);
	
	const char *cp1 = "Bilgisayar";
  const char *cp2 = "Bilgileri";
  int ret;
  ret = strcmp(cp1, cp2);

  if(ret<0) 
		printf("cp1 karakter dizisi cp2 karakter dizisinden küçüktür!");
  else if(ret>0) 
		printf("cp2 karakter dizisi cp1 karakter dizisinden küçüktür!");
  else 
		printf("cp1 karakter dizisi cp2 karakter dizisine eşittir!");

}
