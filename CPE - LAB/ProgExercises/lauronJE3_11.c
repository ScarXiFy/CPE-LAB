/*
============================================================================
 FILE        : lauronJe3_11.c
 AUTHOR      : LAURON, JOHN ENRICO D.
 DESCRIPTION : Calculates and Displays Weekly Pay
 COPYRIGHT   : 09/13/2023
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
    int main ()

{
    float WeeklyPay;    //Weekly Pay
    float YearlyPay;    // Yearly Pay

    printf("Yearly pay: ");     // Inputs the Yearly Pay
    scanf ("%f", &YearlyPay);

    WeeklyPay = YearlyPay / 52;     // Formula to get the Weekly Pay

    printf("Your Weekly Pay Is: %f",WeeklyPay);     // Displays the Weekly Pay


   return 0;


}
