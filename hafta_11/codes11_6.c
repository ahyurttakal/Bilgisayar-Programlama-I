//string uzunluk2

#include <stdio.h>
int hesapla(char *ch) 
{
   int sayac = 0;
   while (*ch != '\0') 
   {
      sayac++;
      ch++;
   }
   return sayac;
} 
void main() 
{
   char str[25];
   int k;
   printf(" String giriniz : "); fgets(str, sizeof str, stdin);
   k = hesapla(str);
   printf(" Girilen %s stringinin uzunlugu : %d ", str, k-1);
}
 
