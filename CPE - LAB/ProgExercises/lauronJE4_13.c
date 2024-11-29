/*
============================================================================
 FILE        : lauronJE4_13.c
 AUTHOR      : LAURON, JOHN ENRICO D.
 DESCRIPTION : Determine a student's final grade and indicate whether it is passing or failing.
 COPYRIGHT   : 09/27/2023
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
    float  firstMark;
    float secondMark;
    float thirdMark;
    float fourthMark;
    float finalGrade;

    // Asks the 1st to 4th Marks
    printf("1st Mark: ");
    scanf("%f", &firstMark);
    printf("2nd Mark: ");
    scanf("%f", &secondMark);
    printf("3rd Mark: ");
    scanf("%f", &thirdMark);
    printf("4th Mark: ");
    scanf("%f", &fourthMark);

    finalGrade = (firstMark + secondMark + thirdMark + fourthMark) / 4;     // Formula to get the Final Grade or Average

    if(finalGrade < 50)
    {
        printf("FINAL GRADE: %.2f \t REMARKS: FAILED", finalGrade);     // Displays the Final Grade
    }

    else if(finalGrade >= 50 && finalGrade <= 100)
    {
        printf("FINAL GRADE: %.2f \t REMARKS: PASSED", finalGrade);    // Displays the Final Grade
    }

    else
    {
        printf("INVALID INPUT!");       // If the Final Grade surpasses 100
    }

    return 0;
}