/*
============================================================================
 FILE        : lauronJo, dotillosJe6_13.c
 AUTHOR      : DOTILLOS, JEFF THOMAS V., LAURON, JOHN ENRICO D.
 DESCRIPTION :  Create a program that lets the user choose an operation (power problem solver, factorial problem solver, or finding roots for quadratic equations using quadratic formula) from the menu.
 COPYRIGHT   : 11/09/2023
 REVISION HISTORY
 Date:               By: 	        Description:
============================================================================
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Function Prototypes

void displayMenu();
int powerSolver(int base, int p);
int factorialSolver(int num);
int quadraticSolver(int a, int b, int c);

// Global Variables

float root1, root2;

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
    // Determine the Variables

    int choice, base, p, num, power, factorial, quadratic, a, b, c;
    do
    {
        displayMenu();

        printf("Enter your choice: "); // Asks the users choice
        scanf("%d", &choice);

        switch (choice)
        {
        case 1: // Power Problem Calculator
        {
            printf("Input base: ");
            scanf("%d", &base);
            printf("Input exponent: ");
            scanf("%d", &p);

            power = powerSolver(base, p);

            printf("%d to the power of %d is %d\n", base, p, power);
            break;
        }
        case 2: // Factorial Problem Calculator
        {
            printf("\nEnter a number: ");
            scanf("%d", &num);

            factorial = factorialSolver(num);

            printf("%d factorial is equal to %d\n", num, factorial);
            break;
        }
        case 3: // Quadratic Problem Calculator
        {
            printf("\nInput the value of a: ");
            scanf("%d", &a);
            printf("Input the value of b: ");
            scanf("%d", &b);
            printf("Input the value of c: ");
            scanf("%d", &c);

            quadratic = quadraticSolver(a, b, c);

            if (quadratic == 1)
            {
                printf("There is no solution.\n");
            }

            else if (quadratic == 2)
            {
                printf("There is only one root : %.2f.\n", root1);
            }

            else if (quadratic == 3)
            {
                printf("There are no real roots.\n");
            }

            else if (quadratic == 4)
            {
                if (root1 == root2)
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

    while (choice != 4);

    return 0;
}

/*
============================================================================
 FUNCTION    : displayMenu
 DESCRIPTION : Displays Menu
 ARGUMENTS   : void
 RETURNS     : main
===========================================================================
*/

void displayMenu()
{
    int choice;

    printf("\n\n\tScarMath!\n");
    printf("1. Power Problem Solver\n");
    printf("2. Factorial Problem Solver\n");
    printf("3. Quadratic Solver\n");
    printf("4. Quit\n");
}

/*
============================================================================
 FUNCTION    : powerSolver
 DESCRIPTION : Power Problem Calculator
 ARGUMENTS   : int base, p - inputted values
 RETURNS     : return - int base, p
===========================================================================
*/

int powerSolver(int base, int p)
{
    return pow(base, p);
}

/*
============================================================================
 FUNCTION    : factorialSolver
 DESCRIPTION : Factorial Problem Calculator
 ARGUMENTS   : int num - inputted value
 RETURNS     : return - int factorial
===========================================================================
*/

int factorialSolver(int num)
{
    int factorial = 1;
    for (int count = 1; count <= num; count++)

        factorial *= count;

    return factorial;
}

/*
============================================================================
 FUNCTION    : quadraticSolver
 DESCRIPTION : Quadratic Problem Calculator
 ARGUMENTS   : int a, b , c - inputted value
 RETURNS     : return - flag
===========================================================================
*/

int quadraticSolver(int a, int b, int c)
{
    int flag;
    float discriminant = b * b - 4 * a * c;

    if (a == 0 && b == 0)
    {
        flag = 1;
    }
    else if (a == 0)
    {
        root1 = (float)-c / b;

        flag = 2;
    }
    else if (discriminant < 0)
    {
        flag = 3;
    }
    else
    {
        root1 = ((-b + sqrt(discriminant)) / (2 * a)), root2 = ((-b - sqrt(discriminant)) / (2 * a));

        flag = 4;
    }

    return flag;
}