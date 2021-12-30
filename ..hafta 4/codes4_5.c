//*
//**
//***
//****

#include<stdio.h>

int main()
{
int i,j,satir;
printf("Satır sayısı gir ");
scanf("%d",&satir);	
while(i<=satir)
{
	j=0;
	while(j<i+1)
	{
		printf("*");
		j++;
	}
	i++;
	printf("\n");
}
}
