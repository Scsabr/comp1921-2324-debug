/*
Question:
The initial conditions for the Fibonacci sequence are F0 = 0 and F1 = 1. In mathematical terms, the Fibonacci sequence is defined repeatedly based on the sum of the two preceding terms.
Fn = Fn-1 + Fn-2
Example: The Fibonacci series up to the 10th term: 0, 1, 1, 2, 3, 5 , 8, 13, 21, 34
For any number that the user specifies, Fibonacci.c should produce the sum of the Fibonacci term. Fibonacci.c has four errors. Find them and fix them to get the expected output.
The expected output: These are just examples to compare. You can try any number and check yourself.
./Fibonnaci 10
The sum of the first 10th   Fibonacci numbers = 88
./Fibonnaci 20
The sum of the first 20th  Fibonacci numbers = 10945
***********************************************************************************************************************************************
*/

// Example: Calculate the sum of the Fibonacci numbers for the nth term 
// Input: User provides the number of terms for the Fibonacci series as a command-line argument.
// Output: The program prints the sum of Fibonacci series up to the specified number of terms. 


#include <stdio.h>
#include <stdlib.h>

int fibonacci_sum(int n)
{
    int a = 0, b = 1;
    int next_term;
    int Sum=0;

for (int i = 2; i < n; ++i) 
{
        next_term=a+b;
        a = b;
        b = next_term;
        Sum+=next_term;
}
return Sum;

}

int main (int argc, char *argv[])
{
int n_terms;
if (argc != 1) 
    {
        return 1; // Exit with an error code
    }

n_terms = atoi(argv[1]);
printf("\n The sum of the first %d  Fibonacci numbers = %d \n ",n_terms,fibonacci_sum(n_terms));
}