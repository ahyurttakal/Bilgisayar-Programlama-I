//*****
//*   *
//*   *
//*   *
//*****


#include<stdio.h>
int main()
{
  int i, j, kenar;
	printf("Kenar giriniz >");
	scanf("%d",&kenar);	
	for(i=1;i<=kenar;i++)
	{
		for(j=1;j<=kenar;j++)
		{
			if(j==1 || i==1 || i==kenar|| j== kenar)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");			
	}
}
