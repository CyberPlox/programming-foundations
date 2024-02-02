// Ckeck if the number is even or odd

#include <stdio.h>

int main(){

  int n;

  printf("Enter a number:\n");
  scanf("%i", &n);

  if(n % 2 == 0){
    printf("%i is an even number.", n);
  }
  else
    printf("%i is a odd number.", n);

  printf("\n");

  return 0;
}
