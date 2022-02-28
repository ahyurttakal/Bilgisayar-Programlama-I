#include<stdio.h>

int main()
{
	printf("Hello World\n");
	//Tek satirlik aciklama
	/*Bu da cok
	satirlik aciklama */
	printf("Ben Ahmet");
	printf("\n\"Senin adin nedir?\" diye sordu.");
	printf("Bazi Temel"
	" Programlama"
	" Islemleri");
	////////////////////////////
	//Veri türleri-Deðiþkenler
	//Temel Veri türleri= char, int, long, float, double
	//Özel Veri türleri= Diziler, Pointer, Structure
	
	//char=karakterler, '', 
	//int, long=tamsayýlar
	//float, double=ondalýklý sayýlar
	
	char ornek1='A';
	printf("Deger= %c\n", ornek1);
	
	int ornek2=32;
	printf("Deger= %d\n", ornek2);
	
	float ornek3=3.2;
	printf("Deger= %.1f\n", ornek3);
	
	double ornek4=32.2;
	printf("Deger= %.2lf\n", ornek4);
	
	long ornek5=322;
	printf("Deger= %ld\n", ornek5);nt a=21, b=9, toplam;
	toplam=a+b;
	printf("\n");
	printf("\na sayisinin degeri %d"
	"\nb sayisinin degeri %d"
	"\nToplam= %d", a,b,toplam);
	////////////////////////////
	
	///Aritmatiksel Operatörler
	int a=12, b=8, toplam;
	toplam=a+b;
	printf("Toplam= %d \n", toplam);
	
	int cikarma;
	cikarma=a-b;
	printf("Cikarma= %d \n", cikarma);
	
	int carpma;
	carpma=a*b;
	printf("Carpma= %d \n", carpma);
	
	int bolme;
	bolme=a/b;
	printf("Bolme= %d \n", bolme);
	
	float bolme2;
	bolme2=(float)a/b; ///Cast operatörü
	printf("Bolme= %.2f \n", bolme2);
	
	int mod;
	mod=a%b;
	printf("Mod= %d \n", mod);
	
	////////////////////////////
	int sayi;
	printf("\nSayi gir >");
	scanf("%d", &sayi);
	printf("\nGirdiginiz sayi = %d ", sayi);
	/////////////////////////
	int saat;
	float ucret;
	char karakter;
	printf("\nCalisanin bas harfini girin>");
	scanf("%c",&karakter);
	printf("\nCalisma saati giriniz>");
	scanf("%d",&saat);
	printf("\nSaat basi ucret giriniz>");
	scanf("%f",&ucret);
	float maas=saat*ucret;
	printf("%c harfiyle baslayan calisanin "
	"maasi =%f",karakter,maas);
//////////////////////////////////////////////	
	//Artirma,Azaltma 
	int i=10,j=60;
	printf("i=%d,j=%d",i++,j--);
	printf("\ni=%d,j=%d",++i,--j);
	i+=1;
	j-=1;
	printf("\ni=%d,j=%d",i,j);
	i=i+1;
	j=j-1;
	printf("\ni=%d,j=%d",i,j);
	i=+1;
	j=-1;
	printf("\ni=%d,j=%d",i,j);
}
