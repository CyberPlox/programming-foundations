// Print a series of prime number to a given limit

#include <stdio.h>

int main(){

  int n;

  printf("Enter the limit:\n");
  scanf("%i", &n);

  int i, j, count;

  if(n == 0 || n == 1){
    printf("0 and 1 are neither prime nor composite.");
  }
  else{
    for(i = 1; i <=n; i++){
      count = 0;
      for(j = 2; j <= i / 2; j++){
        if(i % j == 0){
          count++;
          break;
        }
      }
      if(count == 0 && count != 1){
        printf("%i\n", i);
      }
    }
  }
  return 0;
}
