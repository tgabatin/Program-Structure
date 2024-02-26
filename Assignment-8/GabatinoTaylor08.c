/**
 * This program will calculate your BMI, round your age up or down, and tell you  
 * the rate at which the Corona Virus spreads.
 * The functions used were from the math library, specifically pow(), exp(), ceil(),
 * floor(), and sqrt().
 *
 * @author Taylor D. Gabatino
 * @assignment ICS 212 Assignment 08
 * @date February 13, 2020
 *
 */

#include "getdouble.h"
#include <stdio.h>
#include <math.h>

/*
 * Function main:
 * -------------------------
 * Asks the user to input floating point integers to represent height, weight, age, money, and choices.
 * 
 * returns: the user input determined by what the prompt asks: double. 
 */

int main(void) {

  double userWeight; // Variable that stores the users weight.
  double userHeight; // Variable that stores the users height.
  double userAge; // Variable that stores the users age.
  double bodyMassIndex; //Variable that calculates the body mass index of the user,
  double userAnswer; //Variable that takes in user input and Yes or No and stores it in 1 or 2. 
  double userMoney; //Variable that stores user input as money.
  double virusSpread = 0.15; //Variable to apply exponential function to. 
  
  //Gets the user input for weight.
  printf("Please enter your weight in kilograms.\n");
  userWeight = getdouble();
  printf("Your weight is '%f'\n", userWeight);

  //Gets the user input for height.
  printf("Please enter your height in meters.\n");
  userHeight = getdouble();
  printf("Your height is '%f'\n", userHeight);

  //Gets the user input for age.
  printf("Please enter your age along with a decimal indicating the month.\n");
  userAge = getdouble();
  printf("Your age is '%f'\n", userAge);

  //Calculates the body mass index of the user and returns it. 
  bodyMassIndex = userWeight / (userHeight * userHeight);
  printf("Your calculated body mass index is '%f'\n", bodyMassIndex);

  //Rounds the users age up or down depending on the input.
  printf("Let's have some fun with your age.\n");
  printf("Do you want to be younger or older? Press 1 for yes, and 2 for no.\n");
  userAnswer = getdouble();
  if (userAnswer == 1) {
    userAge = ceil(userAge);
    printf("If you were older, your age would be '%f'\n", userAge);
  }
  if (userAnswer == 2) {
    userAge = floor(userAge);
    printf("If you were younger, your age would be '%f'\n", userAge);
  }

  // Returns a lower or higher amount of the amount of money indicated in bank by the user.
  printf("Hey, do you have a bank account? Press 1 or 2 to lose or gain money! \n");
  userAnswer = getdouble();
  userMoney = 0.0;
  if (userAnswer == 1) {
    printf("Alright, tell me how much money you have.\n");
    userMoney = getdouble();
    userMoney = sqrt(userMoney);
    printf("Uh oh, you lost money! Your new bank total is '%f'\n", userMoney);
  }
  if (userAnswer == 2) {
    printf("Alright, tell me how much money you have.\n");
    userMoney = getdouble();
    userMoney = pow(userMoney, 5);
    printf("Oh wow, you won money! Your new bank total is '%f'\n", userMoney);
  } 
  
  // Returns the rate at which the Corona Virus spreads by applying an exponential function. 
  printf("Do you want to know about how fast the coronavirus can spread if people stopped getting sick?? Press 1 for yes, and 2 for no.\n");
  userAnswer = getdouble();
  if (userAnswer == 1) {
    virusSpread = exp(virusSpread);
    printf("The virus will spread at this rate: '%f'\n", virusSpread);
  } else if (userAnswer == 2) {
    printf("You're probably an anti-vaxxer!\n");
  }
  return 0;
}




























  



 
 
 
