/*
============================================================================
 FILE        : lauronJE5_11.c
 AUTHOR      : LAURON, JOHN ENRICO D.
 DESCRIPTION : Program that will ask 10 integers and display the average of all even numbers and the product of all odd numbers entered by the user.
 COPYRIGHT   : 10/06/2023
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
    // Determine the variables
  int even_sum = 0;
  int odd_product = 1;
  int even_count = 0;

    // Ask the user to enter 10 integers
  int numbers[10];
  for (int i = 1; i < 11; i++) {
    printf("Enter integer %d: ", i);
    scanf("%d", &numbers[i]);
  }

    // For Loop to calculate the sum of even numbers and the product of odd numbers
  for (int i = 1; i < 11; i++) 
  {
    if (numbers[i] % 2 == 0)  
    {
      even_sum += numbers[i];
      even_count++;
    } 
    else 
    {
      odd_product *= numbers[i];
    }
  }

  float average;

  if (even_count == 0)
  {
    average = 0;
  }
  else
  {
    average = even_sum / even_count;    // Formula for sumAverage
  }


  // Check if there were any odd numbers
  if (odd_product == 1 && even_sum > 0)
  {
    // If there were no odd numbers, output 0
    printf("Average of even numbers: %.2f\n", average);
    printf("Product of odd numbers: 0\n");
  } 
  
  else if (odd_product != 1 && even_sum == 0)
  {
    printf("Average of even numbers: 0\n");
    printf("Product of odd numbers: %d\n", odd_product);
  }
  
  else 
  {
    // Otherwise, output the product of odd numbers
    printf("Average of even numbers: %.2f\n", average);
    printf("Product of odd numbers: %d\n", odd_product);
  }

  return 0;
}