#include <stdio.h>
int main() {
   int arr[10]={3,6,0,9,11,99,34,28,18,2};
   int n=10;
   int i, j, minimum, swap;
   for (i = 0; i < (n - 1); i++) {
      minimum = i;
      for (j = i + 1; j < n; j++) {
         if (arr[minimum] > arr[j])
            minimum = j;
      }
      if (minimum != i) {
         swap = arr[i];
         arr[i] = arr[minimum];
         arr[minimum] = swap;
      }
   }
   for (i = 0; i < n; i++)
      printf("%d\t", arr[i]);
   return 0;
}
