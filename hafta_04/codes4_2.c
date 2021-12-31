///continue, break, goto deyimleri

#include<stdio.h>
int main()
{
  int i;
	for(i=0;i<20;i++)
	{
		if(i%2==0) //çift
			continue; //devam,
		printf("%d\n",i); //else durumunu, tek sayıları yazdır		
		if(i>5)
			break; //döngü dışı
		printf("%d\n",i);
		if(i==10) goto x; 
	}
		x:	printf("Donguden Çıkış");
}
