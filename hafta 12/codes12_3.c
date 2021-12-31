//Dizilerde dinamik bellek yönetimi

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
	char *p[5];
	int d;
	
	for(d=0;d<5;d++)
	{
		p[d]=(char*)malloc(10*sizeof(char));
	}
	
	for(d=0;d<5;d++)
	{
		strcpy(p[d],"Afyon");
	}
	
	for(d=0;d<5;d++)
	{
		printf("%s ",p[d]);
	}
	
	for(d=0;d<5;d++)
	{
		free(p[d]);
	}	
}
