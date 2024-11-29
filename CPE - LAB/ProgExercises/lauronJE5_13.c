/*
============================================================================
 FILE        : lauronJE5_13.c
 AUTHOR      : LAURON, JOHN ENRICO D.
 DESCRIPTION : Create a program that lets the user choose an operation (power problem solver, factorial problem solver, or quadratic problem solver) from the menu.
 COPYRIGHT   : 10/09/2023
 REVISION HISTORY
 Date:               By: 	        Description:
============================================================================
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

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
    int choice;

    do
    {
            // Main menu
        printf("\n\n\tScarMath!\n");
        printf("1. Power Problem Solver\n");
        printf("2. Factorial Problem Solver\n");
        printf("3. Quadratic Solver\n");
        printf("4. Quit\n");   
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
            {
                int base;
                int exponent;
                double result;

                printf("Input base: ");
                scanf("%d", &base);
                printf("Input exponent: ");
                scanf("%d", &exponent);

                    // Formula for powerSolver           
                result = pow(base,exponent);
                printf("%d to the power of %d is %.2f\n", base, exponent, result);
                break;
            }
            case 2:
            {
                int n;
                int result;
                int factorial = 1;
                printf("\nEnter a number: ");
                scanf("%d", &n);

                for(int count = 1; count <= n; count++)
                {
                    factorial *= count;
                }

                printf("%d factorial is equal to %d\n", n, factorial);
                break;
            }
            case 3: 
            {
                    // Determine the variables
                float a, b, c;
                float discriminant;
                float root1, root2;


                    // Inputs and Gets the values of a, b, and c
                printf("\nInput the value of a: ");
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
                break;
            }
            case 4:
            {
                printf("Thank you for using ScarMath!. Bye!\n");
                break;
            }
            default:
            {
                printf("Please enter #s 1 - 4 only!\n");
            }
        }
    }

    while (choice != 4);    // Ends loop if the user inputs 4 (Quit)


    return 0;
}