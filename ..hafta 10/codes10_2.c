//dizilerde pointer

#include<stdio.h>

int main()
{
	int *i,j;
	int dizi[5]={5,10,15,20,25};
	i=&dizi[0];
	for(j=0;j<5;j++,i++)
	{
		///operatörle
		printf("%d.inci indisin adresi=%p\n",j,&dizi[j]);
		printf("%d.inci indisin değeri=%d\n",j,dizi[j]);
		///Pointerla
		printf("%d.inci indisin adresi=%p\n",j,i);
		printf("%d.inci indisin değeri=%d\n",j,*i);
		
		printf("\n");
	}
	
}
