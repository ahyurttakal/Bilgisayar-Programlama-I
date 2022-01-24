//Bir çok öğrencinin olduğu bir sistemde 
//öğrencilerin ad,soyad,numara,ortalama,dersler,vize ve final notları, 
//derslerin ortalama notlarının hesaplandığı, 
//hesaplama işlemi yapılmadan önce vizenin ortalamayı ne kadar etkileyeceği 
//kullanıcı tarafından girilmesi istenmesi istenilmektedir.

#include <stdio.h>
struct ders{
    char dersAdi[50];
    int vize;
    int final;
    int ortalama;
};
struct ogrenci {
  char adi[50]; 
  char soyadi[50]; 
  int numara; 
  float ortalama; 
  struct ders aldigiDersler[3];
};
int main(void)
{ 
  struct ogrenci dizi[2];
  int x;
  int y;
  float vizeOrtalama;
  printf("Vize ortalaması ne kadar olacak ? (0.4 gibi)\n");
  scanf("%f",&vizeOrtalama);
  for (x=0; x <2;x++)
  {
      printf("%d. öğrenci için adını giriniz:\n",x+1);
      scanf("%s",dizi[x].adi);
      printf("%d. öğrenci için soy adını giriniz:\n",x+1);
      scanf("%s",dizi[x].soyadi);
      printf("%d. öğrenci için numarasını giriniz:\n",x+1);
      scanf("%d",&dizi[x].numara);
      printf("%d. öğrenci için ortalamasını giriniz:\n",x+1);
      scanf("%f",&dizi[x].ortalama);
      
      for (y=0; y <3; y++)
      {
            printf("%d. öğrencinin %d. dersinin adını giriniz:\n",x+1,y+1);
            scanf("%s",dizi[x].aldigiDersler[y].dersAdi);
            printf("%d. öğrencinin %d. dersinin vize notunu giriniz:\n",x+1,y+1);
            scanf("%d",&dizi[x].aldigiDersler[y].vize);
            printf("%d. öğrencinin %d. dersinin final notunu giriniz:\n",x+1,y+1);
            scanf("%d",&dizi[x].aldigiDersler[y].final);
            dizi[x].aldigiDersler[y].ortalama=(int)(dizi[x].aldigiDersler[y].vize*vizeOrtalama+(1-vizeOrtalama)*dizi[x].aldigiDersler[y].final);
      }
  }
   for (x=0; x<2;x++)
  {
      printf("%d. öğrenci adı:%s, soyadı:%s, numarası:%d, ortalaması:%.2f\n",x+1,dizi[x].adi,dizi[x].soyadi,dizi[x].numara,dizi[x].ortalama);   
      for (y=0; y <3; y++)
      {
            printf("%d. öğrencinin %d. dersinin adı:%s vize:%d final:%d ders ortalaması:%d giriniz:\n",x+1,y+1        ,dizi[x].aldigiDersler[y].dersAdi,dizi[x].aldigiDersler[y].vize,dizi[x].aldigiDersler[y].final,dizi[x].aldigiDersler[y].ortalama);
      }
  }
  return 0;
}
