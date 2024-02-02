// Check if the character is vowel, consonant or neither.

#include<stdio.h>

int main(void){
	
	char x;
	
	printf("Enter a character:\n");
	scanf("%c", &x);
	
	if(x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' || x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U'){
		printf("\n%c is vowel.", x);
	}
	else if(x >= 'a' && x <= 'z' || x >= 'A' && x<= 'Z'){
		printf("\n%c is consonant.", x);
	}
	else
		printf("\nThe character is neither vowel nor consonant.");
		
	printf("\n");
}
