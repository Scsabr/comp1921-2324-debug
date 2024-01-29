//This program will find the square roots of numbers
//Incorporating assert statement for testing.

#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <math.h>

//A simple function to calculate the square root of numbers
double square_root(int x) {
    assert(x >= 0);             // Ensure that the input is non-negative
    double y= sqrt(x);
    return y;
}

int main(int argc, char* argv[]) {
    
    if (argc != 2) {
        printf("Usage: %s <array_length>\n",argv[0]);
        return 1;           // Exit with an error code
    }
    
    int arr_length = atoi(argv[1]);
       
    int numbers[arr_length];
    double roots[arr_length];

    for (int i=0;i<arr_length;i++)
        numbers[i]=i;
    
    for (int i=0;i<arr_length;i++)
        roots[i]=square_root(numbers[i]);
     
    for (int i=0;i<arr_length;i++)
        printf( " Square root of %d  is  %f  \n",numbers[i],roots[i]);
   
    return 0;
}