// Access the elements of an array using pointer

#include <stdio.h>

int main(){

  int numbers[5], n=0;

  printf("How many elements you would like to enter?: ");
  scanf("%d",&n);
  
  printf("Enter elements: ");
  for (int i = 0; i < n; i++)
    scanf("%d", numbers + i);

  printf("Entered elements: \n");
  for (int i = 0; i < n; i++)
    printf("%d\n", *(numbers + i));
  
  return 0;
}
