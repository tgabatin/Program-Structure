/**
 * A program that takes user input twice and defines whether it is a char
 * or if the given input is a number. 
 *
 * @author Gabatino, Taylor
 * @assignment ICS 212 Assignment 04
 * @date January 30, 2020
 */

#include "getdouble.h"
#include <stdio.h>

/*
 * Function main:
 * ---------------------
 * Asks the user to input a char or a double and returns the given input.
 * 
 * returns: the user input determined by what the prompt is; char or double. 
 */

int main(void) {
  char firstLetter = 'A'; /* The first variable to store the first char user input */
  char secondLetter = 'B'; /* The second variable to store the second char user input. */
  double firstNumber = 1.1; /* The first variable to store the first double user input. */
  double secondNumber = 1.2; /* The second variable to store the second double user input. */
  printf("Please enter a letter: \n "); /* Prints within the parameters, asking for user input. */
  firstLetter = getchar(); /* Sets the user input to the variable firstLetter */
  printf("The letter you entered is '%c'\n", firstLetter); /* Prints the user input back to the screen */
  getchar(); /* Clears the char user input. */
  printf("Please enter another letter: "); /* Prints within the parametes, asking for user input. */
  secondLetter = getchar(); /* Sets the user input to the variable secondLetter */
  printf("The second letter you input is '%c'\n", secondLetter); /* Prints the user input back to the screen. */
  getchar(); /* Clears the char user input */
  printf("Please enter a number: \n"); /* Prints within the parameters, asking for type double user input. */
  firstNumber = getdouble(); /* Sets user input to the variable firstNumber */
  printf("The number that you have entered is: '%f'\n", firstNumber); /* Prints the user input back to the screen. */
  printf("Please enter another number: \n"); /* Prints within the parameters, asking for type double user input. */
  secondNumber = getdouble(); /* Sets user input to the variable secondNumber. */
  printf("The second numer that you have entered is : '%f'\n", secondNumber); /* Prints the user input back to the screen. */
  return 0; /*Exits the block of code and executes. */
}
