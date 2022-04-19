#include <stdio.h>
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
  while (1) {
    printf("%s", "Menu:\n1)\tBubble sort\n2)\tInsertion sort\n3)\tQSort\n4)\tExit\n");
    scanf("%d", &punct);
    switch(punct) {
      case 1:
      bubble(array[n]);
      break;
      case 2:
      insert(array[n]);
      break;
      case 3:
      qsort(array[n]);
      break;
      case 4:
      return 0;
    }
  }
}
