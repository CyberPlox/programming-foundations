// Check if the character is uppercase, lowercase, special character or decimal(0-9)

#include <stdio.h>

int main(){

  char x;
  int y;

  printf("Enter a character:\n");
  scanf("%c", &x);

  y = (int)(x);

  if(y >= 65 && y <= 90){
    printf("\n%c is an uppercase character.", x);
  }
  else if(y >= 97 && y <= 122){
    printf("\n%c is a lowercase character.", x);
  }
  else if(y >= 48 && y <= 57){
    printf("\n%c is a decimal.", x);
  }
  else if(y >= 32 && y <= 47 || y >= 58 && y <= 64 || y >= 91 && y <= 96 || y >= 123 && y <= 126){
    printf("\n%c is a special character.", x);
  }
  else
    printf("\nMaybe a unprintable character.");

  printf("\n");

  return 0;
}
