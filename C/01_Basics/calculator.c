// Basic calculator

#include <stdio.h>

int main(){

  int n1, n2, tmp, answer;

  printf("Enter two numbers:\n");
  scanf("%i %i", &n1, &n2);

  printf("Choose what to do:\n(1). Sum\n(2). Difference\n(3). Multiply\n(4). Divide\n");
  printf("PS: Doesn't support floating point Calulations.");
  scanf("%i", &tmp);

  if(tmp == 1){

    printf("%i + %i = %i", n1, n2, n1 + n2);
  }
  else if(tmp == 2){

    printf("%i - %i = %i", n1, n2, n1 - n2);
  }
  else if(tmp == 3){

    printf("%i * %i = %i", n1, n2, n1 * n2);
  }
  else if(tmp == 4){

    printf("%i / %i = %i", n1, n2, n1 / n2);
  }
  else
    printf("Invalid Input!");

  printf("\n");

  return 0;
}
