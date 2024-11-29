/*
============================================================================
 FILE        : lauronJo7_12.c
 AUTHOR      : LAURON, JOHN ENRICO D.
 DESCRIPTION : A program that asks a string and determine how many vowels and consonants.
 COPYRIGHT   : 11/19/2023
 REVISION HISTORY
 Date:               By: 	        Description:
============================================================================
*/
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// Function Prototypes

bool isVowel(char ch);
int countVowels(char str[256]);
int countConsonants(char str[256]);

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
    // Determine the variables

    char str[256];
    int vowelCount, consonantCount;

    printf("Enter a string: "); // Asks the user a string
    gets(str);

    vowelCount = countVowels(str);
    consonantCount = countConsonants(str);

    printf("\nThere are %d vowels and %d consonants in the string.", vowelCount, consonantCount); // Displays the amount of vowels and consonants in the string

    return 0;
}

/*
============================================================================
 FUNCTION    : isVowel
 DESCRIPTION : Determines if the string has a vowel letter
 ARGUMENTS   : char ch - inputted character
 RETURNS     : return - ch
===========================================================================
*/

bool isVowel(char ch)
{
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');
}

/*
============================================================================
 FUNCTION    : countVowels
 DESCRIPTION : Counts the number of vowel letter in the string
 ARGUMENTS   : char str[256] - inputted string
 RETURNS     : return - vowelCount
===========================================================================
*/

int countVowels(char str[256])
{
    int vowelCount = 0;

    for (int i = 0; str[i]; i++)
    {
        if (isVowel(str[i]))
        {
            vowelCount++;
        }
    }

    return vowelCount;
}

/*
============================================================================
 FUNCTION    : countConsonant
 DESCRIPTION : Counts the number of consonant letter in the string
 ARGUMENTS   : char str[256] - inputted string
 RETURNS     : return - consonantCount
===========================================================================
*/

int countConsonants(char str[256])
{
    int consonantCount = 0;

    for (int i = 0; str[i]; i++)
    {
        if (str[i] >= 65 && str[i] <= 90 || str[i] >= 97 && str[i] <= 122)
        {
            if (!isVowel(str[i]))
            {
                consonantCount++;
            }
        }
    }

    return consonantCount;
}