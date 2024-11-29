/*
============================================================================
 FILE        : lauronJo7_13.c
 AUTHOR      : LAURON, JOHN ENRICO D.
 DESCRIPTION : A program that asks for 5 strings and display the longest string.
 COPYRIGHT   : 11/19/2023
 REVISION HISTORY
 Date:               By: 	        Description:
============================================================================
*/
#include <stdio.h>
#include <string.h>

// Function Prototypes

void readStrings(char str[][256], int numStrings);
int findLongestString(char str[][256], int numStrings);

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

    char str[5][256];
    int numStrings = 5;

    readStrings(str, numStrings);

    int longestStringIndex = findLongestString(str, numStrings);

    printf("The longest string is: "); // Displays the longest string
    puts(str[longestStringIndex]);

    return 0;
}

/*
============================================================================
 FUNCTION    : readStrings
 DESCRIPTION : Reads the strings inputted
 ARGUMENTS   : void
 RETURNS     : main
===========================================================================
*/

void readStrings(char str[][256], int numStrings)
{
    for (int i = 0; i < numStrings; i++)
    {
        printf("Enter string #%d: ", i + 1);
        gets(str[i]);
    }
}

/*
============================================================================
 FUNCTION    : findLongestString
 DESCRIPTION : Finds the longest string
 ARGUMENTS   : char str[256], int numStrings - inputted string
 RETURNS     : return - longestStringIndex
===========================================================================
*/

int findLongestString(char str[][256], int numStrings)
{
    int longestStringLength = 0;
    int longestStringIndex = 0;

    for (int i = 0; i < numStrings; i++)
    {
        int length = strlen(str[i]);
        if (length > longestStringLength)
        {
            longestStringLength = length;
            longestStringIndex = i;
        }
    }

    return longestStringIndex;
}