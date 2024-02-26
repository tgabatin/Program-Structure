/*
 * This program will print out the numbers 1 - 999 in Japanese. 
 *
 * @author Gabatino, Taylor
 * @assignment ICS 212 Assignment 07
 * @date February 11, 2020
 */

#include <stdio.h>

/* This function will print out 1 - 999 in Japanese. Variables are stored in the 
   hundreds, tens, and ones place, and the output is printed on a new line as 
   the program iterates using a basic for and if statement.
 */
int main() {
  /*Declares the variables based on the powers of ten. */
  int ones = 0;
  int tens = 0;
  int hundreds = 0;
  int number;

  printf("This program will print out 1 - 999 in Japanese\n");

  /*This for loop will iterate until 999, printing out the resulting number in Japanese. */
  for (number = 1; number <= 999; number++) {
    /*The conversion for the ones, tens, and hundredths place of the powers of ten. */
    ones = (number / 1) % 10;
    tens = (number / 10) % 10;
    hundreds = (number / 100) % 10;
    /*The print statement that declares the number before the conversion to Japanese. */
    printf("%d - ", number);
    /*This is the case for the hundredths place of the powers of 10, (numbers 100-999).*/
    if (hundreds > 0) {
      if (hundreds == 9) 
	printf("Kyuu");
      else if (hundreds == 8) 
	printf("Hachi");
      else if (hundreds == 7) 
	printf("Nana");
      else if (hundreds == 6)
	printf("Roku");
      else if (hundreds == 5)
	printf("Go");
      else if (hundreds == 4)
	printf("Yon");
      else if (hundreds == 3)
	printf("San");
      else if (hundreds == 2)
	printf("Ni");
      else
        printf("Ichi");
      /*A single hundred, without tens or ones place. */
        printf(" Hyaku ");
    }
    /*This is a special case for the numbers 11 - 19 in Japanese. */
    if (tens != 1) {
      if (tens == 9)
	printf("KyuuJyuu ");
      else if (tens == 8)
	printf("HachiJyuu ");
      else if (tens == 7)
	printf("NanaJyuu ");
      else if (tens == 6)
	printf("RokuJyuu ");
      else if (tens == 5)
	printf("GoJyuu ");
      else if (tens == 4)
	printf("YonJyuu ");
      else if (tens == 3)
	printf("SanJyuu ");
      else if (tens == 2)
	printf("Nijyuu ");
      /*This is the case for single digit numbers, 1 - 9. */
      if (ones > 0) {
	if (ones == 9)
	  printf("Kyuu\n");
	else if (ones == 8)
	  printf("Hachi\n");
	else if (ones == 7)
	  printf("Nana\n");
	else if (ones == 6)
	  printf("Roku\n");
	else if (ones == 5)
	  printf("Go\n");
	else if (ones == 4)
	  printf("yon\n");
	else if (ones == 3)
	  printf("San\n");
	else if (ones == 2)
	  printf("Ni\n");
	else
	  printf("Ichi\n");
      } else {
	  printf("\n");
      }
    } else {
      /*This is the case for the tens place in the powers of ten. */
      if (ones > 0) {
	if (ones == 9)
	  printf("JuuKyuu\n");
	else if (ones == 8)
	  printf("JuuHachi\n");
	else if (ones == 7)
	  printf("JuuNana\n");
	else if (ones == 6)
	  printf("JuuRoku\n");
	else if (ones == 5)
	  printf("JuuGo\n");
	else if (ones == 4)
	  printf("JuuYon\n");
	else if (ones == 3)
	  printf("JuuSan\n");
	else if (ones == 2)
	  printf("JuuNi\n");
	else
	  printf("JuuIchi\n");
      } else {
	/*This is the single case for if the number is 10. */
	  printf("Jyuu\n");
      }
    }
  }
  return 0;
 }
