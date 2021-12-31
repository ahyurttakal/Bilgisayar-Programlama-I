//pointerla dizideki sonraki degerin adresine erişim

#include<stdio.h>

int main()
{
	int *i,j;
	int dizi[5]={5,10,15,20,25};
	i=&dizi[0];
	printf(" %d %p\n",*i,i);
	*i++;
	printf(" %d %p\n",*i,i);
	(*i)++;
	printf(" %d %p\n",*i,i);
	*(i++);
	printf(" %d %p\n",*i,i);
}
