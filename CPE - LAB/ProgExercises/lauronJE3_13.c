/*
============================================================================
 FILE        : lauronJE3_13.c
 AUTHOR      : LAURON, JOHN ENRICO D.
 DESCRIPTION : Calculates and Displays the total tuition fee for 2 Semesters
 COPYRIGHT   : 09/15/2023
 REVISION HISTORY
 Date:               By: 	        Description:
============================================================================
*/
#include <stdio.h>


// "#define" defines the constants which are registration fee, unit fee, penalty and penalty fraction

#define REGISTRATIONFEE 450
#define UNITFEE 450
#define PENALTY 2260
#define PENALTYFRACTION 12

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

    float firstUnits;
    float secondUnits;
    float firstFee;
    float secondFee;
    float totalFee;

    printf("Input the Number of Units in the 1st Semester : ");     // Inputs the number of units in the 1st semester
    scanf("%f", &firstUnits);

    firstFee = REGISTRATIONFEE + UNITFEE * firstUnits + PENALTY * (firstUnits / PENALTYFRACTION); // Formula to get the total fee of the 1st semester

    printf("\nInput the Number of Units in the 2nd Semester : ");     // Inputs the number of units in the 2nd semester
    scanf("%f", &secondUnits);

    secondFee = REGISTRATIONFEE + UNITFEE * secondUnits + PENALTY * (secondUnits / PENALTYFRACTION);    // Formula to get the total fee of the 2nd semester

    printf("\n1st Semester Tuition Fee : %7.2f\n", firstFee);     // Total fee of the 1st semester
    printf("\n2nd Semester Tuition Fee : %7.2f\n", secondFee);    // Total fee of the 2nd semester

    totalFee = firstFee + secondFee;                // Formula to get the sum of the 1st and 2nd semester

    printf("\nTotal Tuition Fee : %7.2f", totalFee);      // Prints the total tuition fee

    return 0;
}