#include<stdio.h>

int main()
{	
  int mat[2][2];
	int n,m;
	printf("Degerleri giriniz>");
	for(n=0;n<2;n++)
	{
		for(m=0;m<2;m++)
			scanf("%d",&mat[n][m]);
	}
	int sat,sut,enk;
	enk=mat[0][0];
	for(n=0;n<2;n++)
	{
		for(m=0;m<2;m++)
		{
			if(enk>mat[n][m])
			{
				enk=mat[n][m];
				sat=n;
				sut=m;
			}		
		}		
	}
	printf("Enk=%d Satir=%d Sutun=%d", enk,sat,sut);
}
