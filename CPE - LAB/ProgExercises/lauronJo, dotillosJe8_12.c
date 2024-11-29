/*
============================================================================
 FILE        : lauronJo, dotillosJe8_12.c
 AUTHOR      : DOTILLOS, JEFF THOMAS V., LAURON, JOHN ENRICO D.
 DESCRIPTION : Write a function to search an element in array using pointers and return the index location. The function accepts the starting address of the array, number of entries and number to search.
 COPYRIGHT   : 11/27/2023
 REVISION HISTORY
 Date:               By: 	        Description:
============================================================================
*/
#include <stdio.h>

// Function Prototype

int indexSearch(int *numArray, int numEntries, int numSearch);

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
    int numEntries, indexFinder, numSearched;

    printf("Enter number of Entries: "); // Asks the user to input the number of Entries
    scanf("%d", &numEntries);

    int numArray[numEntries];

    for (int i = 0; i < numEntries; i++)
    {
        printf("Enter Number: ");
        scanf("%d", &numArray[i]);
    }

    printf("Search data: "); // Asks the user to search data
    scanf("%d", &numSearched);
    indexFinder = indexSearch(numArray, numEntries, numSearched); // Calls the function indexSearch

    if (indexFinder >= 0)
        printf("FOUND in Index %d", indexFinder);
    else
        printf("NOT FOUND");
    return 0;
}

int indexSearch(int *numArray, int numEntries, int numSearch)
{
    int j = 0, index = -1;
    do
    {
        if (*(numArray + j) == numSearch)
            index = j;
        j++;
    } while (j < numEntries && index < 0);
    return index;
}