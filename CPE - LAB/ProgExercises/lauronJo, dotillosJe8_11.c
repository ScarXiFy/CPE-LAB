/*
============================================================================
 FILE        : lauronJo, dotillosJe8_11.c
 AUTHOR      : DOTILLOS, JEFF THOMAS V., LAURON, JOHN ENRICO D.
 DESCRIPTION : Write a function that sets up an array called days, which contains pointers to the names of the days of the week and return the name of the day from the given day. The function accepts the given day.
 COPYRIGHT   : 11/27/2023
 REVISION HISTORY
 Date:               By: 	        Description:
============================================================================
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function Prototype

char *daysWeek(int dayNumber);

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
    int dayNumber;
    char *dayName;

    printf("Enter day: "); // Asks the user to enter day number
    scanf("%d", &dayNumber);

    dayName = daysWeek(dayNumber); // Calls the function daysWeek

    printf("Day of the Week: %s", dayName); // Displays the Day of the Week

    return 0;
}

/*
============================================================================
 FUNCTION    : daysWeek
 DESCRIPTION : Checks the inputted dayNumber
 ARGUMENTS   : int dayNumber - inputted number
 RETURNS     : return - dayName
===========================================================================
*/

char *daysWeek(int dayNumber)
{
    char *dayName;
    char *days[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"}; // Array of the Days of the Week
    dayName = (dayNumber < 1 || dayNumber > 7) ? "INVALID" : days[dayNumber - 1];

    return dayName;
}