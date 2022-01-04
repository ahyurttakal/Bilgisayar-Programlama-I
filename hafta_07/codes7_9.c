//nxn'lik matrisin sütunlarını toplayıp ayrı diziye aktaran kod

#include<stdio.h>
int main()
{
	int i,j,n;
	int mat[10][10];
	int dizi[10];
	printf("Matris boyutu gir>"); scanf("%d",&n);
	//nxn'lik matrise degerler girme
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("%d. satir, %d.sutun elemani:",i,j);
			scanf("%d",&mat[i][j]);
		}
	}
	for(i=1;i<=n;i++)
		dizi[i]=0;
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
			dizi[j]+=mat[i][j];
	}
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
			printf("%d ",mat[i][j]);
		printf("\n");
	}
	printf("\n");
	
	for(i=1;i<=n;i++)
	{
		printf("%d ",dizi[i]);
	}
}
