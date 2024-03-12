// Search for an element in a array

#include <stdio.h>

int main(){

  int x[255];
  int i, srch;
  x[0] = 0;

  for(i = 0; i < 99; i++){
    x[i + 1] = x[i] + 2;    
  }

  printf("\nHere we have an array of 100 whole numbers,\nEnter an element which you wish to search for:");
  scanf("%i", &srch);

  for(i = 0; i < 100; i++){
    if(x[i] == srch){
      break;
    }
  }
 
  printf("\n");

  if(x[i] == srch){
    printf("%i is found at line %i\n", srch, i + 1);
  }
  else
    printf("Entry not found!\n");

  printf("\n");
  return 0;
}
