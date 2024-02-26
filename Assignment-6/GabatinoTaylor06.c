/*
 * This program will recieve a number between 0 - 9 and output the 
 * number in another language of your choice. 
 * 
 * @author     Gabatino, Taylor
 * @assignment ICS 212 Assignment 06
 * @date       February 6, 2020
 */

#include<stdio.h>

/*
 * This program requires user input. The input will be a valid real number
 * between 0 through 9. The returned outpout is the users input in Japanese.
 */
int main(void) {
  /*Stores the user input a variable named num. */
  int num = 0;
  puts("This program will require you to input a number between 0 - 9. ");
  puts("This number will be returned to you in Japanese! Isn't that cool?");
  puts("Please enter a number between 0 - 9");
  /*Gets the user input using the getchar() method. */
  num = getchar();
  /*Switch statement that determines Japanese word for number input. */
  switch(num) {
  case '0':
    puts("The Japanese word for 0 is Rei.");
    break;
  case '1':
    puts("The Japanese word for 1 is Ichi.");
    break;
  case '2':
    puts("Ni");
    break;
  case '3':
    puts("Sahn");
    break;
  case '4':
    puts("Yon");
    break;
  case '5':
    puts("Go");
    break;
  case '6':
    puts("Roku");
    break;
  case '7':
    puts("Shichi or Nana");
    break;
  case '8':
    puts("Hachi");
    break;
  case '9':
    puts("Kyuu");
    break;
    /*This default case will print if no valid number between 0 - 9 is the input. */
  default:
    puts("You have not entered a valid number!");
    break;
  }
}
