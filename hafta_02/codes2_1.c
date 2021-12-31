#include<stdio.h>

int main()
{
	printf("Hello World\n");
	//Tek satırlık açıklama
	/*Bu da çok 
	satırlı açıklama */
	printf("Ben Ahmet");
	printf("\n\"Senin adın nedir?\" diye sordu.");
	printf("Bazı Temel"
	" Programlama"
	" İşlemleri");
	////////////////////////////
	int a=21, b=9, toplam;
	toplam=a+b;
	printf("\n");
	printf("\na sayısının degeri %d"
	"\nb sayısının degeri %d"
	"\nToplam= %d", a,b,toplam);
	////////////////////////////
	float bolum;
	bolum=(float)a/b; //Cast Operatörü, (Boxing-Unboxing)
	printf("\nBölme işleminin sonucu= %f", bolum);
	////////////////////////////
	int sayi;
	printf("\nSayı giriniz >");
	scanf("%d", &sayi);
	printf("\nGirdiğiniz sayı = %d ", sayi);
	/////////////////////////
	int saat;
	float ucret;
	char karakter;
	printf("\nÇalışanın baş harfini girin>");
	scanf("%c",&karakter);
	printf("\nÇalışma saati giriniz>");
	scanf("%d",&saat);
	printf("\nSaat başı ücret giriniz>");
	scanf("%f",&ucret);
	float maas=saat*ucret;
	printf("%c harfiyle başlayan çalışanın "
	"maaşı =%f",karakter,maas);
//////////////////////////////////////////////	
	//Artırma,Azaltma İşlemleri
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
