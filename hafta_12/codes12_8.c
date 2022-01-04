//BubbleSort

#include <stdio.h>
void degistir(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
void bubbleSort(int dizi[], int n)
{
   int i, j;
   for (i = 0; i < n-1; i++)      
       for (j = 0; j < n-i-1; j++)
           if (dizi[j] > dizi[j+1])
              degistir(&dizi[j], &dizi[j+1]);
}
void yazdir(int dizi[], int n)
{
    int i;
    for (i=0; i < n; i++)
        printf("%d ", dizi[i]);
    printf("\n");
}
int main()
{
    int dizi[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(dizi)/sizeof(dizi[0]);
    bubbleSort(dizi, n);
    printf("Siralanmis: \n");
    yazdir(dizi, n);
}
