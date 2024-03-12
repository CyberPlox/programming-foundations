// Declare, Initialize and print an array

#include <stdio.h>

int main(){

  int x[10];
  int i;

  printf("Enter 10 elements:\n");

  for(i = 0; i < 10; i++){
    scanf("%i", &x[i]);
  }
 
  printf("The array is:");

  for(i = 0; i < 10; i++){
    printf(" %i,", x[i]);
  }

  printf("\n");

  return 0;
}
