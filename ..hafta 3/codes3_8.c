#include <stdio.h>
int main() 
{
  int i=0;
  while(i++<10)
  {
  	printf("%d Merhaba\n",i);
  }
//////////////////////
  int j=0;
  do{
  	printf("%d Merhaba\n",++j);
  }while(j<10);
}
