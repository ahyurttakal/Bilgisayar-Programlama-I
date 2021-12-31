//Harflerin permütasyonu

#include <stdio.h>
#include <string.h>

void degistir(char *ch1, char *ch2)
{
    char tmp;
    tmp = *ch1;
    *ch1 = *ch2;
    *ch2 = tmp;
}
void perm(char *chr, int bas, int son)
{
   int i;
   if (bas == son)
     printf("%s  ", chr);
   else
   {
       for (i = bas; i <= son; i++)
       {
          degistir((chr+bas), (chr+i));
          perm(chr, bas+1, son); 
       }
   }
}
 
int main()
{
   char str[] = "aku"; 
   int n = strlen(str);
   printf(" Permutasyonlar : \n");
   perm(str, 0, n-1); 
}
