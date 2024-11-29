/*
============================================================================
 FILE        : lauronJE3_12.c
 AUTHOR      : LAURON , JOHN ENRICO D.
 DESCRIPTION : Calculates and Displays the second to the last digit and last digit of the given number.
 COPYRIGHT   : 09/14/2023
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

    int num;
    int secondlastDigit;         
    int lastDigit;
    int sum;

    printf("Input any number: ");       // Inputs any number
    scanf("%d", &num);

    secondlastDigit = (num / 10) % 10;  // Formula on how to get the Second to the last digit
    lastDigit = num % 10;               // Formula on how to get the last digit

    sum = secondlastDigit + lastDigit;  // Calculates the sum of the second to the last digit and the last digit
    printf("The sum of the is: %d + %d = %d \n", secondlastDigit, lastDigit, sum);  // Prints the sum

    return 0;
}
