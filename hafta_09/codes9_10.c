//recursive decimal to bin converter

#include<stdio.h>
int dectobin (int say)
{ 
  if (say==0)
    return 0;
  else 
    return say%2+10*dectobin(say/2);
   
}
 int main()
 {
 	int say;
 	printf("sayi gir>"); scanf("%d",&say);
 	printf("sonuc=%d",dectobin(say));
 }
