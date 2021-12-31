//1
//2 3
//4 5 6
//7 8 9 10

#include<stdio.h>
int main()
{	
  int i,j,s=1;	
	for(i=0;i<=5;i++)
	{
		for(j=1;j<i;j++) 
		{
			printf("%d ",s);
			s=s+1;
		}
		printf("\n");
	}
}
