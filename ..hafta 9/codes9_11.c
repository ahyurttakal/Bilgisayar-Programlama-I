#include<stdio.h>
#define PI 3.14
float  hesapla(float r)
 {
 	float hacim ;//return yazilmasi gerekli
 	hacim =(4*PI*r*r*r)/3;
 	printf("kure hacmi=%f",&hacim);
 	return hacim; 	
 }
  void diger_hesaplama(float ,float );
  int main ()
  {   
     float yaricap,yukseklik ;
     printf("yaricapi gir >"); scanf("%f",&yaricap);
     printf("yukseklik gir >"); scanf("%f",&yukseklik);
     printf("kure hacim =%f", hesapla(yaricap));
     diger_hesaplama(yaricap,yukseklik);
  }
  void diger_hesaplama(float  r,float h)
   {  
     float koni_hacim, silindir_hacim;
     koni_hacim=(PI*r*r*h)/3;
     silindir_hacim=(PI*r*r*h);
     printf("koni hacim =%f silindir hacim=%f",koni_hacim,silindir_hacim);
  }
