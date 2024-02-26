/**
 * This program will create and translate the International Morse code to a phrase in English. 
 * 
 * @author Taylor D. Gabatino
 * @assignment ICS212 Assignment 15
 * @date March 24, 2020
 */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define SIZE 36

const char *morse[SIZE] = {
  "0 ----- ",
  "1 .---- ",
  "2 ..--- ",
  "3 ...-- ",
  "4 ....- ",
  "5 ..... ",
  "6 -.... ",
  "7 --... ",
  "8 ---.. ",
  "9 ----. ",
  "a .- ",
  "b -... ",
  "c -.-. ",
  "d -.. ",
  "e . ",
  "f ..-. ",
  "g --. ",
  "h .... ",
  "i .. ",
  "j .--- ",
  "k -.- ",
  "l .-.. ",
  "m -- ",
  "n -. ",
  "o --- ",
  "p .--. ",
  "q --.- ",
  "r .-. ",
  "s ... ",
  "t - ",
  "u ..- ",
  "v ...- ",
  "w .-- ",
  "x -..- ",
  "y -.-- ",
  "z --.. ",
};

int main(int argc, char *argv[]) {
  int i, j;
  printf("This program will translate Morse Code into English for you. \n");
  printf("Please input Morse Code as the input as you execute this program. \n");
  //Error checking, ensures that there are at least two command line arguments. 
  if (argc < 2) {
    //If the two arguments are not present, the code exits the program.
    printf("ERROR ENCOUNTERED: Please enter Morse code on the command line. \n");
  }
  //Loop through the command line input
  for (i = 1; i < argc; i++) {
    //Sets the increment of the second substring of array to 0, looping through the size of the array. 
    j = 0;
    while (j < SIZE) {
      //Determines the length of the first string in the subset array morse code.
      int lengthMorse = strlen(morse[j]);
      //Determines the length of the argument input of the second string of the subset array of morse code. 
      int lengthArgv = strlen(argv[i]);
      //Could use strcmp() here?
      if(lengthMorse == lengthArgv + 3){
	//Searches for the string within the substring of the length of Morse code and argument.
	char *string = strstr(morse[j], argv[i]);
	//Checks to see if the substring of the substring is empty.
	if(string != NULL){
	  //Prings out the morse code.
	  printf("%c",morse[j][0]);
	  //Sets the new substring equal to the size,
	  j  = SIZE;
	}
      }
      //Increments the value at j of morse. 
      j++;
    }
  }
  printf("\n");
  return 0;
}
