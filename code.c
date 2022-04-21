#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "funcs.h"

int main() {
  int n, punct;
  printf("%s\n", "Set number of elements:");
  printf("%s\t", "Set:");
  scanf("%d", &n);
  int array[n];

  for (int i=0;i<n;i++) {
    printf("%s%d%s\t", "Array[", i, "]:");
    scanf("%d", &array[i]);
  }
  displayArray(n, array);
  while (1) {
    printf("%s", "Menu:\n1)\tBubble sort\n2)\tInsertion sort\n3)\tQSort\n4)\tExit\nSet:\t");
    scanf("%d", &punct);
    switch(punct) {
      case 1:
        bubble(n, array);
        break;
      case 2:
        insert(n, array);
        displayArray(n, array);
        break;
      case 3:
        qsort(array, n, sizeof (int), (int(*) (const void *, const void *)) comp);
        displayArray(n, array);
        break;
      case 4:
        return 0;
      default:
        printf("%s", "Error: There is not this punct at menu\n");
        break;
    }
  }
}
