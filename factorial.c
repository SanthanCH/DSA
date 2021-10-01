/* A program to find
*  the factorial of a number given by the user.
*/

#include <stdio.h>
void factorial(int n)
{
    int i;
     unsigned long long fact = 1;

    // shows error if the user enters a negative integer
    if (n < 0)
        printf("\nFactorial of a negative no doesnot exist.");
        
    else 
    {
        for (i = 1; i <= n; ++i) 
        {
            fact *= i;  // Multiplying each increment
        }
        printf("\nFactorial of %d = %llu", n, fact);
    }
}


/*The main driver code*/
int main(void) 
{
    int n;
    
    /*Taking the user inputs*/
    printf("Enter any integer you want: ");
    scanf("%d", &n);
    
    /*Function call*/
    factorial(n);

    return 0;
}
