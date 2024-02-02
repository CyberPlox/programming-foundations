// Area of a Circle

#include <stdio.h>

#define PI 3.14

int main(){

  float r, area;

  printf("Enter radius:\n");
  scanf("%f", &r);

  // Caclulations
  area = PI * (r * r);

  printf("Area of Circle = %.2f", area);
  printf("\n");

  return 0;
}
