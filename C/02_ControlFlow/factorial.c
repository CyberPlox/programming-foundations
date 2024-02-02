// Factoriial of a number using a loop

#include <stdio.h>

int main()
{
    int n;
    
    // Input
    printf("Enter a number:");
    scanf("%d", &n);

    // Calculation -While loop
    int i = 1, temp = 1;
    while(i <= n)
    {
        temp *= i;
        i++;
    }

    // Output
    printf("Factorial of %d : %d\n", n, temp);

    return 0;
}
