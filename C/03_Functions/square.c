// Use a function to calculate the square of a number

#include <stdio.h>

int SQUARE(int x){

  x = x * x;
  return x;
}

int main(){

  int n, square, x;

  printf("Enter a number:\n");
  scanf("%i", &n);

  square = SQUARE(n);

  printf("%i is the square of %i.", square, n);
  printf("\n");

  return 0;
}
