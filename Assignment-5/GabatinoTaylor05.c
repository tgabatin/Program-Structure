/**
 * A program that asks for a users birthday. The birthdate is then calculated and converted into 
 * the persons age in amount of days.
 *
 * @author      Gabatino, Taylor
 * @assignment  ICS 212 Assignment 05
 * @date        February 5, 2020
 */

#include <stdio.h>
#include "getdouble.h"

/* This function takes input from the user and store it within the input stream.
   The data being read is the users birthdate, with given variables stored in
   month, day, and year. The users age is then calculated from the current date, 
   returning the age of the user in total days. 
 */
int main(void) {
  /*Variables to store the users month of birth.*/
  int month = 0;
  /*Variable to store the users date of birth.*/
  int day = 0;
  /*Variable to store the users year of birth.*/
  int year = 0;
  /*Variable that stores the whole reported date of the users birth. */
  int reportedDate;
  /*The current month used to calculate the days.*/
  int currentMonth = 2;
  /*The current day used to calculate the days.*/
  int currentDay = 4;
  /*The current year used to calculate the days.*/
  int currentYear = 2020;
  /*Stores the current date.*/
  int currentDate;
  /*Stores the final date.*/
  int finalDate;
  puts("The following program will evaluate and calculate your age in the amount of days.");
  printf("Please enter a number representing the month you were born in.");
  /*Retrieves the month of users birth and stores it in the variable.*/
  month = getdouble();
  printf("Please enter a number representing the day you were born. ");
  /*Retrieves the day of the users birth and stores it in the variable.*/
  day = getdouble();
  printf("Please enter a number representing the year you were born ");
  /*Retrieves the year of the users birth and stores it in the variable.*/
  year = getdouble();
  printf("The current date is: 2/4/2020 ");
  printf("Your birthdate is : %i/%i/%i \n", month, day, year);
  /*Calculates the current date*/
  currentDate = (currentYear * 365.25) + ((currentMonth - 1) * 365.23 / 12.0) + currentDay;
  /*Calculates the reported date.*/
  reportedDate = (year * 365.25) + ((month - 1) * 365.25 / 12.0) + day;
  /*Calculates the final date by subtracting the current date and reported date of birth.*/
  finalDate = currentDate - reportedDate;
  /*Prints and returns the final amount of days the users age is.*/
  printf("Your final calculated age in days is: %i \n", finalDate);
  return 0;
}













  



  
  
  
