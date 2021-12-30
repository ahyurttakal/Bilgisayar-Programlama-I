//Farklı boyutlardaki iki matris çarpımı

#include<stdio.h>
int main()
{
	int satir,sutun1,sutun2,i,j,k;
	int dizi1[10][10],dizi2[10][10],sonuc[10][10];
	printf("Satir gir>");
	scanf("%d",&satir);
	printf("Sutun1 gir>");
	scanf("%d",&sutun1);
	printf("Sutun2 gir>");
	scanf("%d",&sutun2);
	////1.Matris degerleri
	for(i=0;i<satir;i++)
	{
		for(j=0;j<sutun1;j++)
		{
			printf("%d. %d eleman=",i+1,j+1);
			scanf("%d",&dizi1[i][j]);
		}
	}
	////2.Matris degerleri
	for(i=0;i<sutun1;i++)
	{
		for(j=0;j<sutun2;j++)
		{
			printf("%d. %d eleman=",i+1,j+1);
			scanf("%d",&dizi2[i][j]);
		}
	}
	/////Sonuc
	int toplam=0;
	for(i=0;i<satir;i++)
	{
		for(j=0;j<sutun2;j++)
		{
			for(k=0;k<sutun1;k++)
			{
				toplam+=dizi1[i][k]*dizi2[k][j];///Matris Çarpımı
			}
			sonuc[i][j]=toplam;			
			toplam=0;
			printf("%d ",sonuc[i][j]);
		}
	}
}
