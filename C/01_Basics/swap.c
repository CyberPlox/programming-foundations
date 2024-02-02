// Swap the values of two variables(integers)

#include<stdio.h> 

int main(){
  
  int a, b; 

  // Input
  printf("Enter two numbers: \n"); 
  scanf("%i %i", &a, &b);

  printf("\nBefore swap, a=%i, b=%i\n", a, b);

  // Swapping:
  int tmp;  
  tmp = a;      
  a = b;    
  b = tmp;

  /*
   Alternative way1:
   a = a + b;
   b = a - b;
   a = a -b;
   
   Aleternative way2:
   a = a * b;
   b = a / b;
   a = a / b;
  */

  // Output
  printf("\nAfter swap, a=%i, b=%i\n", a, b);
  printf("\n");  
  return 0;
}
