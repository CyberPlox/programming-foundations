// Check if the given number is prime or not

#include <stdio.h>

int PRIME(int a){

  int i, count;
  count = 0;
  
  for(i = 1; i <= a / 2; i++){
    if(a % i == 0){
      count++;
    }
  }
  return count;
}

int main(){

  int n, count1;
  
  printf("Enter a number:\n");
  scanf("%i", &n);
  
  count1 = PRIME(n);

  if(n == 1){
    printf("Neither prime nor composite.");
  }
  else if(count1 == 1){
    printf("%i is a prime number.", n);
  }
  else
    printf("%i is a composite number.", n);

  printf("\n");
  return 0;
}
