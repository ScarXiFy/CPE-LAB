/*
============================================================================
 FILE        : lauronJE4_11.c
 AUTHOR      : LAURON, JOHN ENRICO D.
 DESCRIPTION : Determine whether the letter entered by the user is vowel or consonant.
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
    char ch;

    printf("Enter a letter: ");     // Inputs the letter
    scanf("%c", &ch);

    if(ch >= 97 && ch <= 122 || ch >= 65 && ch <= 90)     // Checks if input is a letter
    {
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
      ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')    // Checks if the letter is vowel
      {
        printf("%c is a vowel.\n", ch);     
      }
        else
        {
            printf("%c is a consonant.\n", ch);
        }
    }
    
    else
    {
        printf("Input only LETTER!");       // If the character inputted is not a letter
    }

    return 0;
}       