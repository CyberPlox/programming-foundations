// Convert Celcius to Fahrenheit 

#include <stdio.h>

int main(){

  float tempr1, tempr2;

  printf("Enter temperature in Celcius scale:\n");
  scanf("%f", &tempr1);

  // Conversion
  tempr2 = (tempr1 * 1.8) + 32;

  printf("%.2f degree Celcius = %.2f degree Fahrenheit.", tempr1, tempr2);
  printf("\n");

  return 0;
}
