// Check if the character is an alphabet or not

#include <stdio.h>

int main(){

  char x; 
  int y;

  printf("Enter a character:\n");
  scanf("%c", &x);

  y = (int)(x);

  if(y >= 65 && y <= 90 || y >= 97 && y <= 122){
    printf("\n%c is an alphabet.", x);
  }
  else
    printf("\n%c is not an alphabet.", x);

  printf("\n");

  return 0;
}
