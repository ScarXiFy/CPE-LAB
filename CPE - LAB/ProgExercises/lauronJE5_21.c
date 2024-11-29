/*
============================================================================
 FILE        : lauronJE5_21.c
 AUTHOR      : LAURON, JOHN ENRICO D.
 DESCRIPTION : Multiplication Table
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
    int rows, columns;

        // Asks the user to input the number of rows and columns
    printf("Input the number of rows: ");
    scanf("%d", &rows);
    printf("Input the number of columns: ");
    scanf("%d", &columns);

        
    for(int i = 1; i <= rows; i++)      // for loop to make the rows
    {
        for(int j = 1; j <= columns; j++)   // for loop to make the columns
        {
            printf("%d\t", i * j);  // multiplies rows and columns
        }

        printf("\n");       // for spacing
    }  

    return 0;
}