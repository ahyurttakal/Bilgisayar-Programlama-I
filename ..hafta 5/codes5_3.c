//   1
//  121
// 12321
//1234321

#include<stdio.h>
int main()
{
  int i,j,sayi;
	printf("Bir sayi giriniz >");
	scanf("%d",&sayi);
	
	for(i=1;i<sayi;i++)
	{
		for(j=1;j<sayi-i;j++) ///boşluk
		{
			printf(" ");
		}
		for(j=1;j<i;j++)///her satırda ileri
		{
			printf("%d",j);
		}
		for(j=i;j>0;j--)
		{
			printf("%d",j);
		}

		printf("\n");
	}
}
