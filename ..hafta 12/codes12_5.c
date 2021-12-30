//Recursive Binary Search

#include <stdio.h>
int ara(int dizi[], int bas, int son, int x)
{
    if (son >= bas) {
        int orta = bas + (son - bas) / 2;
        if (dizi[orta] == x)
            return orta;
        if (dizi[orta] > x)
            return ara(dizi, bas, orta - 1, x);
        return ara(dizi, orta + 1, son, x);
    }
    return -1;
}
int main(void)
{
    int dizi[] = { 2, 3, 4, 10, 40 };
    int n = sizeof(dizi) / sizeof(dizi[0]);
    int x = 10;
    int sonuc = ara(dizi, 0, n - 1, x);
    if(sonuc == -1)
         printf("Yok");
    else
		 printf("Sira %d", sonuc);
    return 0;
}
