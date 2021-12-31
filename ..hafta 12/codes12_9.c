//Farklı boyutlarda iki matrsin çarpımı (Dinamik bellek kullanımı ile)
//1 2     4 3     6  7
//2 0  X  1 2  =  8  6
//3 1             13 11

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    int *sonuc,*ilk,*ikinci;
    int *A,*B,*C;
    int i,j,k=0;
    int rowA,colA,sizeA,sizeB,sizeC;
    int rowB,colB;

    printf("İlk matrisin satir ve sutun sayisini giriniz\n");
    scanf("%d%d",&rowA,&colA);


    printf("İkinci matrisin satir ve sutun sayisini giriniz\n");
    scanf("%d%d",&rowB,&colB);

    if(colA!=rowB)
    {
        printf("İlk matrisin sutun sayisi ikinci matrisin satir sayisina esit olmali\n");
    }

    sizeC = rowA*colB;
    sizeA = rowA*colA;
    sizeB = rowB*colB;

    A = (int *)malloc(sizeA*sizeof(int *));
    ilk = A;

    B = (int *)malloc(sizeB*sizeof(int *));
    ikinci = B;

    C = (int *)malloc(sizeC*sizeof(int *));
    sonuc = C;

	printf("İlk matrisin degerleri gir\n");
    for(i=0;i<sizeA;i++,ilk++)
        scanf("%d",ilk);

    printf("İkinci matrisin degerleri gir\n");
    for(i=0;i<sizeB;i++,ikinci++)
        scanf("%d",ikinci);

    ilk=A;        
    ikinci= B;      

	for(i=0;i<rowA;i++)
    {
        for(j=0;j<colB;j++)
        {
            *sonuc=0;
            for(k=0;k<rowB;k++)
               	*sonuc += (*(ilk + (k + i*colA))) * (*(ikinci + (j+k*rowB)));
            sonuc++;
        }
    }
    
    printf("\nSonuc = \n");
    sonuc = C;
    for(i=0;i<rowA;i++)
    {
        printf("\n");
        for(j=0;j<colB;j++,sonuc++)
         	printf("%d\t",*sonuc);
    }

    free(A);
    free(B);
    free(C);
    getch();
}
