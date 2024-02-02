// Find the LCM of two numbers.

#include<stdio.h>

int main(){
	
	int a, b, temp;
	
	printf("Enter two positive numbers:\n");
	scanf("%i %i", &a, &b);
	
	int lcm, i;
	
	for(i = 1; i <= a && i <= b; i++){
		if(a % i == 0 && b % i == 0){
			temp = i;
		}
	}
	
	lcm = (a * b)/temp;
	
	printf("\nLCM of %i and %i is %i.", a, b, lcm);
	
	/** Alternative Way:
	temp = (a > b) ? a : b;
	
	while(1){
		if(temp % a == 0 && temp % b == 0){
			printf("\nLCM of %i and %i is %i.", a, b, temp);
			break;
		}
		temp++;
	}
	**/
	
	printf("\n");
	return 0;	
}
