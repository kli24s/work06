#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

  // [1]
  int a[10];

  // [2]
  a[0] = 0;

  // [3]
  int i;
  srand(time(NULL));
  for (i = 1; i < 10; i++) {
    a[i] = rand();
  }

  // [4]
  printf("==================================[4]\n");
  for (i = 0; i < 10; i++) {
    printf("a[%d]: %d\n", i, a[i]);
  }

  // [5]
  int b[10];

  // [6]
  int *ap = a;
  int *bp = b;

  // [7] - []
  printf("==================================[7] - []\n");
  for (i = 0; i < 10; i++) {
    b[i] = a[9 - i];
  }
  for (i = 0; i < 10; i++) {
    printf("b[%d]: %d\n", i, b[i]);
  }

  // [7] - *
  printf("==================================[7] - *\n");
  for (i = 0; i < 10; i++) {
    *(bp + i) = *(ap + 9 - i);
  }
  for (i = 0; i < 10; i++) {
    printf("b[%d]: %d\n", i, *(b + i));
  }

  printf("==================================\n");
  return 0;

}
