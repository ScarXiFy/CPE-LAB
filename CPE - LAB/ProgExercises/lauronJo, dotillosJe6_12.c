/*
============================================================================
 FILE        : lauronJo, dotillosJe6_12.c
 AUTHOR      : DOTILLOS, JEFF THOMAS V., LAURON, JOHN ENRICO D.
 DESCRIPTION : Determine whether the letter entered by the user is vowel or consonant.
 COPYRIGHT   : 11/09/2023
 REVISION HISTORY
 Date:               By: 	        Description:
============================================================================
*/
#include <stdio.h>
#include <stdbool.h>

// Function Prototypes

bool isLetter(char ch);
bool isVowel(char ch);

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
  // Determine the Variable

  char ch;

  printf("Enter a letter: "); // Asks the user to input a letter
  scanf("%c", &ch);

  if (isLetter(ch))
  {

    if (isVowel(ch))
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
    printf("Input only LETTER!");
  }

  return 0;
}

/*
============================================================================
 FUNCTION    : isLetter
 DESCRIPTION : Determine if the input is a letter
 ARGUMENTS   : char ch - inputted character
 RETURNS     : return - ch
===========================================================================
*/

bool isLetter(char ch)
{
  return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z');
}

/*
============================================================================
 FUNCTION    : isVowel
 DESCRIPTION : Determine if the input is a vowel
 ARGUMENTS   : char ch - inputted character
 RETURNS     : return - ch
===========================================================================
*/

bool isVowel(char ch)
{
  return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
         ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U';
}