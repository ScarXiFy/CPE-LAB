/*
============================================================================
 FILE        : lauronJE4_12.c
 AUTHOR      : LAURON, JOHN ENRICO D.
 DESCRIPTION : Computes the real roots of a quadratic equation .
 COPYRIGHT   : 09/27/2023
 REVISION HISTORY
 Date:               By: 	        Description:
============================================================================
*/
#include <stdio.h>
#include <math.h>

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
    float a, b, c;
    float discriminant;
    float root1, root2;


    // Inputs and Gets the values of a, b, and c
    printf("Input the value of a: ");
    scanf("%f", &a);
    printf("Input the value of b: ");
    scanf("%f", &b);
    printf("Input the value of c: ");
    scanf("%f", &c);

    discriminant = b * b - 4 * a * c;       // Formula to get the discriminant

    if(a == 0 && b == 0)
    {
        printf("There is no solution.\n");
    }

    else if(a == 0)
    {
        root1  = -1 * c / b;
        printf("There is only one root : %.2f.\n", root1);
    }

    else if(discriminant < 0)
    {
        printf("There are no real roots.\n");
    }

    else
    {
        root1 = (-1 * b + sqrt(discriminant)) / (2 * a);    // Formula to get the root 1
        root2 = (-1 * b - sqrt(discriminant)) / (2 * a);    // Formula to get the root 2

        if(root1 == root2)
        {
            printf("One solution found : %.2f.\n", root1);
        }
        else
        {
            printf("Two solutions found : %.2f, %.2f", root1, root2);
        }
    }

    return 0;
}