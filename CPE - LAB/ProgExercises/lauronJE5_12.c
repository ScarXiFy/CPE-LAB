/*
============================================================================
 FILE        : lauronJE5_12.c
 AUTHOR      : LAURON, JOHN ENRICO D.
 DESCRIPTION : Program that will ask the correct numeric passcode before the user can continue his task.
 COPYRIGHT   : 10/07/2023
 REVISION HISTORY
 Date:               By: 	        Description:
============================================================================
*/
#include <stdio.h>
#define PASSCODE 828  // declare 828 as the correct numeric passcode 

/*
============================================================================
 FUNCTION    : main
 DESCRIPTION : Execute the main program
 ARGUMENTS   : none
 RETURNS     : int - exit codes
===========================================================================
*/

int main() {
  // Declare variables
  int passcode;
  int attempts = 1;

  // Ask the user for the passcode
  printf("Enter numeric passcode: ");
  scanf("%d", &passcode);

  // Check if the passcode is correct
  while (passcode != PASSCODE && attempts < 3)
  {
    printf("Incorrect passcode. You have %d more attempts.\n", 3 - attempts);
    attempts++;

    // Ask for the passcode again
    printf("Enter numeric passcode: ");
    scanf("%d", &passcode);
  }

  // If the passcode is correct after 3 trials, display "ACCESS GRANTED"
  if (passcode == PASSCODE)
  {
    printf("ACCESS GRANTED\n");
  } else
  {
    printf("ACCESS DENIED\n");
  }

  return 0;
}