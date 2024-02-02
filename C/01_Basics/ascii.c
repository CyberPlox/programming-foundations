// Find the ascii value of a character

#include <stdio.h>

int main(){

  char x;
  int y;

  printf("Enter a character:\n");
  scanf("%c", &x);

  y = (int)(x);

  printf("\nAscii value of %c is %i.", x, y);
  printf("\n");

  return 0;
}
