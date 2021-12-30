//sesli sessiz harf sayısı

#include <stdio.h>
int main()
{
    char str[50];
    char *pt;
    int  sesli,sessiz;
 	printf(" Bir string giriniz: "); fgets(str, sizeof str, stdin);
    
	pt=str;
     
    sessiz=sesli=0;
    while(*pt!='\0')
    {
        if(*pt=='A' ||*pt=='E' ||*pt=='I' ||*pt=='O' ||*pt=='U' ||*pt=='a' ||*pt=='e' ||*pt=='i' ||*pt=='o' ||*pt=='u')
            sesli++;
        else
            sessiz++;
        pt++; 
    }
     
    printf(" Sesli harfler : %d\n Sessiz harfler : %d\n",sesli,sessiz-1);        
}
