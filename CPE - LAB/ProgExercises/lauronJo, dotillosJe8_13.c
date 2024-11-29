/*
============================================================================
 FILE        : lauronJo, dotillosJe8_13.c
 AUTHOR      : DOTILLOS, JEFF THOMAS V., LAURON, JOHN ENRICO D.
 DESCRIPTION : Create a function that determine and returns the maximum number in an array of integers using pointers. The function accepts the starting address of the array and number of entries.
 COPYRIGHT   : 11/27/2023
 REVISION HISTORY
 Date:               By: 	        Description:
============================================================================
*/
#include <stdio.h>

int maximumSearch(int *numArray, int numEntries);

int main()
{
    int numEntries, maximumNumber;

    printf("Enter number of Entries: "); // Asks the user to input the number of Entries
    scanf("%d", &numEntries);

    int numArray[numEntries];

    for (int i = 0; i < numEntries; i++)
    {
        printf("Enter number: ");
        scanf("%d", &numArray[i]);
    }

    maximumNumber = maximumSearch(numArray, numEntries);
    printf("Maximum Number: %d", maximumNumber);

    return 0;
}

int maximumSearch(int *numArray, int numEntries)
{
    int max = *numArray;

    for (int j = 0; j < numEntries; j++)
    {
        if (*(numArray + j) > max)
            max = *(numArray + j);
    }

    return max;
}