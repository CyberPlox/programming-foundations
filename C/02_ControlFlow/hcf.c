// Find the HCF or GCD of two numbers.

#include<stdio.h>

int main(){
	
	int a, b, temp, i;
	
	printf("Enter two numbers:\n");
	scanf("%i %i", &a, &b);
	
	for(i = 1; i <= a && i <= b; i++){
		if(a % i == 0 && b % i == 0){
			temp = i;
			break;
		}
		temp++;
	}
	 
	/** Alternative Way:
	a = (a > 0) ? a : -a;
	b = (b > 0) ? b : -b;
	
	while(a != b){
    if(a > b){
      
      a = a - b;
    }
    else{
      b = b - a;
    }
    temp = a;
  }
	**/	
	
	printf("\nHCF of %i and %i is %i.", a, b, temp);
	printf("\n");

  return 0;
}
