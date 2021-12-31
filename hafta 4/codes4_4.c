////****
////***
////**
////*

#include<stdio.h>

int main()
{
  int i,j,satir;
	printf("Satır sayısı gir ");
	scanf("%d",&satir);	
	for(i=satir;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
