//typedef kullanımı

#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int x;
    int y;
}p2d;

typedef struct{
    int x;
    int y;
    int z;
}p3d;

int main()
{
    p2d *p2; 
    p3d *p3; 

    p3=(p3d *)malloc(sizeof(p3d));
    if(!p3){
        printf("Bellek hatası.");
        return 1;
    }
    p3->x=100;
    p3->y=200;
    p3->z=150;
    //p2'ye p3 atanıyor ve p3 ile p2 aynı belleği kullanıyor.
    p2=(p2d *)p3;
    printf("x=%d\ny=%d",p2->x,p2->y);
}
