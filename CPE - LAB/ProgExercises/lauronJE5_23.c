/*
============================================================================
 FILE        : lauronJE5_23.c
 AUTHOR      : LAURON, JOHN ENRICO D.
 DESCRIPTION : Fibonacci Sequence
 COPYRIGHT   : 10/15/2023
 REVISION HISTORY
 Date:               By: 	        Description:
============================================================================
*/
#include <stdio.h>

/*
============================================================================
 FUNCTION    : main
 DESCRIPTION : Execute the main program
 ARGUMENTS   : none
 RETURNS     : int - exit codes
===========================================================================
*/

int main()
{
        // Define the variables
    int limit;
    int term1 = 1, term2 = 1;
    int nextTerm;

        // Asks the user to input the limit of the Fibonacci sequence
    printf("Enter limit: ");
    scanf("%d", &limit);

    printf("Fibonacci sequence: ");     // Displays the Fibonacci sequence

    for(int i = 1; i <= limit; i++)     // For loop for the Fibonacci sequence
    {
        printf("%d ", term1);
        nextTerm = term1 + term2;
        term1 = term2;
        term2 = nextTerm;
    }

    return 0;
}