#include <stdio.h>
#include <math.h>

int BubbleRecursion(int n, int array[]);
int displayArray (int n, int array[]);
int insert (int n, int array[]);
int comp(const int *, const int *);

void bubble (int n, int array[]) {
  int bubble_menu;
  printf("%s", "What type of bubble sort do u want?\n1)\tIteration bubble\n2)\tRecursion bubble\nSet:\t");
  scanf("%d", &bubble_menu);
  switch(bubble_menu) {
    case 1:
      for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
          if (array[i]<array[j]) {
            int temp = array[j];
            array[j]=array[i];
            array[i]=temp;
          }
        }
      }
      displayArray(n, array);
      break;
    case 2:
      for (int i=0;i<n;i++) {
        BubbleRecursion(n, array);
      }
      displayArray(n, array);
      break;
  }
}

int insert (int n, int array[]) {
  for(int i=1;i<n;i++) {
  	for(int j=i;j>0 && array[j-1]>array[j];j--) {
        int temp = array[j-1];
        array[j-1] = array[j];
        array[j] = temp;
    }
  }
}

int BubbleRecursion(int n, int array[]) {
  if(n!=1)  {
    if (array[n-1]<array[n-2]) {
      int temp = array[n-2];
      array[n-2]=array[n-1];
      array[n-1]=temp;
      BubbleRecursion(n-1, array);
    }
    else {
      BubbleRecursion(n-1, array);
    }
  }
}

int displayArray (int n, int array[]) {
  for (int i=0;i<n;i++) {
    printf("%d\t", array[i]);
  }
  printf("\n");
}

int comp(const int *i, const int *j)
{
  return *i-*j;
}
