//Örnek struct tanımlaması

#include <stdio.h>
struct ogr
{
    char adi[50];
    int yasi;
    float notu;
} s;
int main()
{
    printf("Ad gir: ");
    scanf("%s", s.adi);
    printf("Yas gir: ");
    scanf("%d", &s.yasi);
    printf("Not gir: ");
    scanf("%f", &s.notu);
    
    printf("Ad: ");
    puts(s.adi);
    printf("Yas: %d\n",s.yasi);
    printf("Not: %.1f\n", s.notu);
}
