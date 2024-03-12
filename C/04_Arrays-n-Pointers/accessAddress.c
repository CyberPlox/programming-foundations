// Accessing Array Elements using Pointers

#include<stdio.h>

int main(){

  int arr[5], i;
  int *ptr = arr;

  printf("Enter some numbers:\n");
  for(i = 0; i < 5; i++){
    scanf("%i", &arr[i]);
  }

  printf("\nYou Entered:\n");
  //Address ptr+i
  //Value stored at the address *(ptr+i)
  for(i = 0; i < 5; i++)
      printf("&arr[%i] = %p\t arr[%i] = %d\n", i, ptr+i, i, *(ptr+i));

  return 0;
}
