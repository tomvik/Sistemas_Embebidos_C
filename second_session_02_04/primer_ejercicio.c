#include <stdio.h>
#include <stdlib.h>

#define SUM(a,b) (a + b)
#define MUL(a,b) (a * b)

int main(void) {

  printf("SUM(3, 5)\t%d\n", SUM(3, 5));
  printf("MUL(3, 5)\t%d\n", MUL(3, 5));


  printf("SUM(10-7, 2+3)\t%d\n", SUM(10-7, 2+3));
  printf("MUL(10-7, 2+3)\t%d\n\n", MUL(10-7, 2+3));
}