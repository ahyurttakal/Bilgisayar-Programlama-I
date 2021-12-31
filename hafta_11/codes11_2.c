//Girilen metin içerisinde istenilen harfin yerini bulan kod

#include<stdio.h>
#include<conio.h>

void main()
{
	char a[50], k, *p;
	int i;
	printf("Bir yazi gir>"); gets(a);
	//fgets(a, sizeof a, stdin);
	printf("Harf gir"); k=getche();
	p=a;
	for(i=0;i<30;i++)
	{
		if(*p==k)
			printf("\n%d. karakter %c",i+1,*p);
		p++;
	}
	getch();
}
