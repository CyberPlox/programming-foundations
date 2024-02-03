// Find the maximum of two numbers

#include <stdio.h>

int MAX(int a, int b){

  int x = (a > b) ? a : b; 
  return x;
}

int main(){

  int n1, n2, max;

  printf("Enter two numbers:\n");
  scanf("%i %i", &n1, &n2);

  max = MAX(n1, n2);

  printf("%i is the maximum among %i and %i.", max, n1, n2);
  printf("\n");

  return 0;
}
