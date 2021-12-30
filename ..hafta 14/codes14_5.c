//10 öğrencinin bilgisinin kaydedilmesi

#include <stdio.h>
struct ogr
{
    char adi[50];
    int yasi;
    float notu;
};
int main()
{
    struct ogr o[10];
    int i;
    printf("Bilgi gir:\n");
    for(i=0; i<10; ++i)
    {
        s[i].roll = i+1;
        printf("\nYas%d,\n",o[i].yasi);
        printf("Adi: ");
        scanf("%s",o[i].adi);
        printf("Notu: ");
        scanf("%f",&o[i].notu);
        printf("\n");
    }
    printf("Gosterimi:\n\n");
    for(i=0; i<10; ++i)
    {
        printf("\nYasi: %d\n",i+1);
        printf("Adi: ");
        puts(o[i].adi);
        printf("Notu: %.1f",o[i].notu);
        printf("\n");
    }
}
