/*
============================================================================
 FILE        : lauronJE5_22.c
 AUTHOR      : LAURON, JOHN ENRICO D.
 DESCRIPTION : Pyramid
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
    // Define the variable num
  int num;

    // Asks the user for the value of N
  printf("Input a value for N: ");
  scanf("%d", &num);

  for (int i = 1; i <= num; i++)        // For loop for the pyramid
  {
    for (int j = 1; j <= num; j++)      // Display the numbers in ascending order from left to middle
    {
      if (i + j - num >= 1) 
      {
        printf("%d", i + j - num);
      } 
      else 
      {
        printf(" ");
      }
    }

    for (int k = 1; k < i; k++)         // Display the numbers in descending order from middle to right
    {
      printf("%d", i - k);
    }

    printf("\n");
  }

  return 0;
}