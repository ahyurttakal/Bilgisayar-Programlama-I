//   *
//  ***
// *****
//*******

#include <stdio.h>
int main() {
   int i, j, satir, k = 0;
   printf("Satir gir: ");
   scanf("%d", &satir);
   for (i = 1; i <= satir; ++i, k = 0) {
      for (j = 1; j <= satir - i; ++j) {
         printf("  ");
      }
      while (k != 2 * i - 1) {
         printf("* ");
         ++k;
      }
      printf("\n");
	}
}
