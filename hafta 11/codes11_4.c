//string uzunluk

#include<stdio.h>
#include<conio.h>
#include<string.h>

int struzn(char *str)
{
	int n=0;
	while(str[n])
		n++;
	return n;	
}
void main()
{
	char s[50];
	printf("String gir>"); gets(s);
	printf("%d\n",struzn(s));
	printf("%d\n",strlen(s));
	getch();
}
