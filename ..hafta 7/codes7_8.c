//Aynı boyutlardaki iki matrisin çarpımı

#include<stdio.h>
#include<math.h>

int main()
{
	int matrisa[10][10], matrisb[10][10], matrisc[10][10];
	int i,j,n;
	
	printf("Boyut giriniz>");
	scanf("%d",&n);
	printf("\nMatris A\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d.satir %d.sutun indisli eleman=",i,j);
			scanf("%d",&matrisa[i][j]);
		}	
	}
	printf("\nMatris B\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d.satir %d.sutun indisli eleman=",i,j);
			scanf("%d",&matrisb[i][j]);
		}	
	}	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			matrisc[i][j]=matrisa[i][j]*matrisb[i][j];
		}	
	}
	printf("\nMATRİS C\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",matrisc[i][j]);
		}	
		printf("\n");
	}	
}
