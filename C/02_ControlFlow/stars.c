// Pyramid of Stars

#include <stdio.h>

int main()
{
    int n;

    // No. of rows
    printf("Enter the no. of rows:");
    scanf("%d", &n);

    int temp = n;

    // Calculation and Output -looping
    for(int i = 1; i <= n; i++) // ROw number
    {
        for(int j = 1; j <= temp - 1; j++) // Number of Spaces
        {
            printf(" ");
        }
        for(int k = 1; k <= 2 * i - 1; k++) // Number of Stars
        {
            printf("*");
        }
        printf("\n");
        temp--;
    }

    return 0;
}
