/*
============================================================================
 FILE        : lauronJo, dotillosJe6_11.c
 AUTHOR      : DOTILLOS, JEFF THOMAS V., LAURON, JOHN ENRICO D.
 DESCRIPTION : Create a program that extracts and adds the two least significant digits of an integer.
 COPYRIGHT   : 11/09/2023
 REVISION HISTORY
 Date:               By: 	        Description:
============================================================================
*/
#include <stdio.h>

// Function Prototypes

int extractFirstLSD(int num);
int extractSecondLSD(int num);
int sumDigits(int x, int y);

/*
============================================================================
 FUNCTION    : main
 DESCRIPTION : Execute the main program
 ARGUMENTS   : void
 RETURNS     : int - exit codes
===========================================================================
*/

int main()
{
    // Determine the Variables

    int num;
    int secondlastDigit;
    int lastDigit;
    int sum;

    printf("Input any number : "); // Asks the user to input any number
    scanf("%d", &num);

    if (num < 0)
        num *= -1;
    lastDigit = extractFirstLSD(num);
    secondlastDigit = extractSecondLSD(num);
    sum = sumDigits(lastDigit, secondlastDigit);
    printf("Sum \t\t : %d + %d = %d \n", secondlastDigit, lastDigit, sum);

    return 0;
}

/*
============================================================================
 FUNCTION    : extractFirstLSD
 DESCRIPTION : Extracts the first last significant digit
 ARGUMENTS   : int num - inputted number
 RETURNS     : int - lastDigit
===========================================================================
*/

int extractFirstLSD(int num)
{
    int lastDigit = num % 10;

    return lastDigit;
}

/*
============================================================================
 FUNCTION    : extractSecondLSD
 DESCRIPTION : Extracts the second last significant digit
 ARGUMENTS   : int num - inputted number
 RETURNS     : int - secondlastDigit
===========================================================================
*/

int extractSecondLSD(int num)
{
    int secondlastDigit = (num / 10) % 10;

    return secondlastDigit;
}

/*
============================================================================
 FUNCTION    : sumDigits
 DESCRIPTION : Calculates the firstLSD and secondLSD
 ARGUMENTS   : int x, y - inputted number
 RETURNS     : int - sum
===========================================================================
*/

int sumDigits(int x, int y)
{
    int sum = x + y;

    return sum;
}