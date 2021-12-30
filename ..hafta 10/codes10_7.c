#include <stdio.h>
void degistir(int *x,int *y,int *z)
{
    int tmp;
    tmp=*y;
    *y=*x;
    *x=*z;
    *z=tmp;
}
int main()
{
    int e1,e2,e3;
    printf(" İlk elemanı giriniz : ");scanf("%d",&e1);
	  printf(" ikinci elemani giriniz : ");scanf("%d",&e2);
	  printf(" Ucuncu elemani giriniz : ");scanf("%d",&e3);
    
    printf("\n Swap'dan onceki degerler:\n");
    printf(" eleman 1 = %d\n eleman 2 = %d\n eleman 3 = %d\n",e1,e2,e3);
    degistir(&e1,&e2,&e3);
    printf("\n Swap'dan sonraki degerler:\n");
    printf(" eleman 1 = %d\n eleman 2 = %d\n eleman 3 = %d\n\n",e1,e2,e3);

}
