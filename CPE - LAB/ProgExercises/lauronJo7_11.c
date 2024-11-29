/*
============================================================================
 FILE        : lauronJo7_11.c
 AUTHOR      : LAURON, JOHN ENRICO D.
 DESCRIPTION : A program that allows a user to enter 10 numbers, then displays all of the numbers, the largest number, and the smallest.
 COPYRIGHT   : 11/19/2023
 REVISION HISTORY
 Date:               By: 	        Description:
============================================================================
*/
#include <stdio.h>

// Function Prototypes

void readNumbers(int numbers[10], int limit);
int findLargestNumber(int numbers[10], int limit);
int findSmallestNumber(int numbers[10], int limit);
void displayInputtedNumbers(int numbers[10], int limit);

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
    // Determine the variables

    int numbers[10];
    int limit = 10;

    readNumbers(numbers, limit);

    int largestNumber = findLargestNumber(numbers, limit);
    int smallestNumber = findSmallestNumber(numbers, limit);

    displayInputtedNumbers(numbers, limit);

    printf("\n%d is the smallest number\n", smallestNumber); // Displays the smallest number
    printf("%d is the largest number\n", largestNumber);     // Displays the largest number

    return 0;
}

/*
============================================================================
 FUNCTION    : findLargestNumber
 DESCRIPTION : Finds the largest number
 ARGUMENTS   : int numbers[10], limit - inputted values and limit
 RETURNS     : return - largest
===========================================================================
*/

int findLargestNumber(int numbers[10], int limit)

{
    int largest = numbers[0];

    for (int i = 0; i < limit; i++)
    {
        if (numbers[i] > largest)
        {
            largest = numbers[i];
        }
    }

    return largest;
}

/*
============================================================================
 FUNCTION    : findSmallestNumber
 DESCRIPTION : Finds the smallest number
 ARGUMENTS   : int numbers[10], limit - inputted values and limit
 RETURNS     : return - smallest
===========================================================================
*/

int findSmallestNumber(int numbers[10], int limit)
{
    int smallest = numbers[0];

    for (int i = 0; i < limit; i++)
    {
        if (numbers[i] < smallest)
        {
            smallest = numbers[i];
        }
    }

    return smallest;
}

/*
============================================================================
 FUNCTION    : displayInputtedNumbers
 DESCRIPTION : Displays the numbers inputted
 ARGUMENTS   : void
 RETURNS     : main
===========================================================================
*/

void displayInputtedNumbers(int numbers[10], int limit)
{
    printf("The numbers you entered are: ");

    for (int i = 0; i < limit; i++)
    {
        printf("%d  ", numbers[i]);
    }

    printf("\n");
}

/*
============================================================================
 FUNCTION    : readNumbers
 DESCRIPTION : Reads the numbers inputted
 ARGUMENTS   : void
 RETURNS     : main
===========================================================================
*/

void readNumbers(int numbers[10], int limit)
{
    printf("ENTER %d NUMBERS!\n", limit);

    for (int i = 0; i < limit; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }
}