//Pointer tanımlamaları

#include <stdio.h>
void main(void)
{

int a = 10, b;
int *d = &a;
printf("d ise bir tam sayi pointer'i ve a'nin adresini tutuyor: %p\n",  d); 
printf("*d ile a'nin degerine ulasiyoruz a = %d\n",   *d); 
printf("&a ile a'nin pointer adresine ulasiyoruz a = %p\n",   &a); 
printf("&b ile b'nin pointer adresine ulasiyoruz : %p\n",   &b);
printf("&d ile d'nin pointer adresine ulasiyoruz : %p\n", &d); 

int *ip,id=278;
ip=&id;
printf("id=%d\n",*ip);
printf("id Adres=%p\n",ip); //pointerle
printf("id Adres=%p\n",&id); //operatörle

int *ip1, *ip2, id1, id2;
ip1=&id1;
ip2=&id2;
id1=42; 
*ip2=67 //Dolaylı
printf("id1=%d\n",*ip1);
printf("id1 Adres=%p\n",ip1); //pointerle
printf("id2 Adres=%p\n",ip2); //operatörle
}
