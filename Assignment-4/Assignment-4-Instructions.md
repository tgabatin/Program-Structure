I. Edit, compile, and run the following program on the UH UNIX/Linux shell:

A. Ask the user to enter two letters.
B. Use function getchar() to get two letters from the user.
C. The newline character ('\n') is also a character that needs to be removed from the input stream with function getchar(), which reads one character at a time from the input stream. In other words, you need to use getchar() twice to input one character. The first getchar() removes the character from the input stream and stores the character. The second getchar() removes the newline character from the input stream. 
D. Display the two letters.
E. Ask the user to enter two numbers.
F. Use function getdouble() to get two numbers from the user.
G. The function getdouble() requires the use of files getdouble.c and getdouble.h and alterations to the makefile makefile-double. 
H. Display the two numbers.
I. DON'T FORGET TO ADD THIS HEADER FILE to the top of your program, or function getdouble() will not return the correct value:
   #include "getdouble.h"
J. Email your makefile and C program to the instructor. 

# Example I/O

 Here are three example inputs and outputs by running the program three times.

Please enter a letter: w
The 1st letter is: 'w'
Please enter another letter: a
The 2nd letter is: 'a'
Please enter a number: 12345.6789
The 1st number is: 12345.678900
Please enter another number: 0.123456789
The 2nd number is: 0.123457


Please enter a letter: e
The 1st letter is: 'e'
Please enter another letter: H
The 2nd letter is: 'H'
Enter a number: 88 
The 1st number is: 88.000000
Enter a another number: 88.888
The 2nd number is: 88.888000


Please enter a letter: Y
The 1st letter is: 'Y'
Please enter another letter: q
The 2nd letter is: 'q'
Enter a number: 5.55
The 1st number is: 5.550000
Enter a another number: 333.333333
The 2nd number is: 333.333333






