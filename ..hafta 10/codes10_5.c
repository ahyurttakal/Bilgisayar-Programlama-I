//Harfleri pointer yardımıyla gösterme

#include<stdio.h>

int main()
{
	char harfler[27];
	int i;
	char *p;
	p=harfler;
	
	for(i=0;i<26;i++)
	{
		*p=i+'A';
		p++;
	}
	
  p=harfler;
	
	printf("Harfler=\n");
	for(i=0;i<26;i++)
	{
		printf("%c ",*p);
		p++;
	}
}
