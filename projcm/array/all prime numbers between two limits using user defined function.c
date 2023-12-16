/**
 * C program to list all prime number between an interval using function.
 */

#include <stdio.h>


/* Function declarations */
int isPrime(int num);
void printPrimes(int lowerLimit, int upperLimit);



int main()
{
    int lowerLimit, upperLimit;
    
    printf("Enter the lower and upper limit to list primes: ");
    scanf("%d%d", &lowerLimit, &upperLimit);
    
    // Call function to print all primes between the given range.
    printPrimes(lowerLimit, upperLimit);
    
    return 0;
}



/**
 * Print all prime numbers between lower limit and upper limit. 
 */
void printPrimes(int lowerLimit, int upperLimit)
{
    printf("All prime number between %d to %d are: ", lowerLimit, upperLimit);
    
    while(lowerLimit <= upperLimit)
    {
        // Print if current number is prime.
        if(isPrime(lowerLimit))
        {
            printf("%d, ", lowerLimit);
        }
        
        lowerLimit++;
    }
}



/** 
 * Check whether a number is prime or not. 
 * Returns 1 if the number is prime otherwise 0. 
 */  
int isPrime(int num)   
{  
    int i;  
      
    for(i=2; i<=num/2; i++)    
    {    
        /*   
         * If the number is divisible by any number   
         * other than 1 and self then it is not prime  
         */    
        if(num % i == 0)    
        {  
            return 0;  
        }    
    }   
      
    return 1;   
}