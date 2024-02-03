// Implement function to reverse a string 

#include <stdio.h> 
#include <string.h> 

void reverse(char* str, int len){

  int i = 0, tmp = 0;

	if (i < len){ 
		tmp = str[i]; 
		str[i] = str[len - 1]; 
		str[len - 1] = tmp; 
		i++; 
		len--; 
		reverse(str, len); 
	} 
} 

int main(){ 
	
  char str[100]; 
	
  printf("Enter a string:");
  scanf("%s", str);

  printf("\nOriginal String: %s\n", str);

	int len = strlen(str); 
	reverse(str, len); 

	printf("\nReversed String: %s\n", str); 
	printf("\n");

  return 0; 
}

