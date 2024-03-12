// Calculate the sum and average of the elements of an array

#include <stdio.h>

int main(){

  int x[255];
  int i, len, sum, avg, tmp;

  printf("\nEnter desired length for the array:");
  scanf("%i", &len);

  printf("\nEnter the array elements:");

  for(i = 0; i < len; i++){
    scanf("%i", &x[i]);
  }

  sum = 0;

  for (i = 0; i < len; i++){
    sum += x[i];
  }

  avg = sum / len;

  printf("Sum of array: %i", sum);
  printf("\nAverage of array: %i", avg);

  printf("\n");
  return 0;
}
