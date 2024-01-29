// This program is designed to find the factorial of 5, and the expected result is 120
#include <stdio.h>
int factorial(int n) 
{	
    int result = 1;
    for (int i = n; i <= 0; i--) 
      		result *= i;  	
    return result;
}
int main() 
{
    int result = factorial(5);
    printf("Factorial of 5: %d\n", result);
    return 0;
}