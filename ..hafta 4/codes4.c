#include<stdio.h>
int main()
{
	int sayi, tersi;
	printf("Sayıyı giriniz>");
	scanf("%d",&sayi);
	while(sayi>0)
	{
		tersi=sayi%10; //kalan
		printf("%d",tersi);
		sayi=sayi/10; //bölüm
	}
///////////////////////////////////
	int i;
	for(i=0;i<20;i++)
	{
		if(i%2==0) //çift
			continue; //döngüden çıkarmadı,
		printf("%d\n",i); //else durumunu, tek sayıları yazdır		
		if(i>5)
			break; //döngü dışı
		printf("%d\n",i);
		if(i==10) goto x; 
	}
		x:	printf("Donguden Çıkış");
////////////////////////////////////////		
		int sayi,adet=0,toplam=0;
		for(;;adet++)//sonsuz döngü
		{
			printf("Bir sayı giriniz >");
			scanf("%d",&sayi);
			if(sayi<0) break;
			toplam+=sayi;					
		}
		printf("Adet= %d\n",adet);
		printf("Toplam= %d\n",toplam);
////////////////////////////////////////
	int i,j,satir;
	printf("Satır sayısı gir ");
	scanf("%d",&satir);	
	for(i=satir;i>=1;i--)
	{
		for(j=1;j<i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
///////////////////////////////	
	while(i<=satir)
	{
		j=0;
		while(j<i+1)
		{
			printf("*");
			j++;
		}
		i++;
		printf("\n");
	}
////////////////////////////////
	for(i=0;i<=5;i++)
	{
		for(j=1;j<9;j++)
		{
			if(j<=(9-(2*i-1)/2) || j>=(i+4))
				printf(" ");
			else
				printf("*");
		}
		printf("\n");
	}
//////////////////////////////////////////	
	int satir,bosluk,yildiz,kat;	
	printf("Sayi giriniz");
	scanf("%d",&kat);
	
	for(satir=1;satir<=kat;satir++)
	{
		for(bosluk=1;bosluk<=kat-satir;bosluk++)
		{
			printf(" ");
		}
		for(yildiz=1;yildiz<=(satir*2)-1;yildiz++)
		{
			printf("*");
		}
		printf("\n");
	}
//////////////////////////////////////////////
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
/////////////////////////////////////////
	int a=0, b=1, c, n, i;
	printf("sayı giriniz >");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("%d . eleman= %d\n",i,c);
		c=a+b;
		a=b;
		b=c;
	}
//////////////////////////////////////
	int sayi;	
	do{
		printf("Sayıyı giriniz ");
		scanf("%d",&sayi);
		if(sayi>999 || sayi<0)
			printf("Uygun değildir");
		else
			break;
	}while(1);
/////////////////////////////////	
	switch(sayi/100){
		case 9: printf("dokuzyuz "); break;	
		case 8: printf("sekizyuz "); break;
		case 7: printf("yediyuz "); break;
		case 6: printf("altiyuz "); break;
		case 5: printf("besyuz "); break;
		case 4: printf("dortyuz "); break;
		case 3: printf("ucyuz "); break;
		case 2: printf("ikiyuz "); break;	
		case 1: printf("yuz "); break;	
	}
	
		switch((sayi%100)/10){
		case 9: printf("doksan "); break;	
		case 8: printf("seksen "); break;
		case 7: printf("yetmis "); break;
		case 6: printf("altmis "); break;
		case 5: printf("elli "); break;
		case 4: printf("kirk "); break;
		case 3: printf("otuz "); break;
		case 2: printf("yirmi "); break;	
		case 1: printf("on "); break;	
	}
	
		switch(sayi%10){
		case 9: printf("dokuz "); break;	
		case 8: printf("sekiz "); break;
		case 7: printf("yedi "); break;
		case 6: printf("alti "); break;
		case 5: printf("bes "); break;
		case 4: printf("dort "); break;
		case 3: printf("uc "); break;
		case 2: printf("iki "); break;	
		case 1: printf("bir "); break;	
	}
////////////////////////////////////////	
	int sayi,i;
	int asal=0;
	printf("Bir sayı giriniz ");
	scanf("%d",&sayi);	
	for(i=2;i<=sayi/2;i++)
	{
		if(sayi%i==0){
			asal=1;
			break;
		}
	}
	if(asal==0)
		printf("Asal");
	else
		printf("Degil");	
}
