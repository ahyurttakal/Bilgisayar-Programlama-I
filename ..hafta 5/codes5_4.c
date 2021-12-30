//2 3 4 5
//3 5 7 9
//4 7 10 13
//5 9 13 17
//6 11 16 21

#include<stdio.h>
int main()
{
int i,j;	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<5;j++) ///boşluk
		{
			printf("%d ",i*j+1);
		}
		printf("\n");
	}
}
