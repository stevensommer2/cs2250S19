/*
 * =====================================================================================
 *
 *       Filename:  homework.c
 *
 *    Description:  doing the homework
 *
 *        Version:  1.0
 *        Created:  04/05/2019 10:02:57 PM
 *       Revision:  none
 *    Compiler(C):  gcc homework.c -o homework.out -lm
 *  Compiler(C++):  g++ homework.c -o homework.out -lm
            Usage:  ./homework.out
 *
 *         Author:  Steven Sommer (), steven.sommer@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
//For C code
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//For C++ code
//#include <iostream>
//using namespace std;

// Constants and globals

// Function Prototypes

// Main Function
int main(int argc, char* argv[])
{
#include<stdio.h>
#include <string.h>
#include <ctype.h>

   /* Type your code here. */
   //(1) Prompt the user for a title for data. Output the title. (1 pt) 
   char title[50];
   char fColumn[50];
   char sColumn[50];
   char firstName[50];
   char lastName[50];
   //char userInput;
   int valuesRead;
   int novelNum;
   const int USER_TEXT_LIMIT = 1000;
   char userText[USER_TEXT_LIMIT];

   bool inputDone;         //Flag to indicate next iteration
   inputDone = false;
   
   
   printf("Enter a title for the data:\n");
   fgets(title, 50, stdin);
   printf("You entered: ");
   printf("%s\n", title);
   
   //(2) Prompt the user for the headers of two columns of a table. Output the column headers. (1 pt)
   printf("Enter the column 1 header:\n");
   fgets(fColumn, 50, stdin);
   printf("You entered: ");
   printf("%s\n", fColumn);
   
   printf("Enter the column 2 header:\n");
   fgets(sColumn, 50, stdin);
   printf("You entered: ");
   printf("%s\n", sColumn);
   
   //(3) Prompt user for data points in (string, integer) format
   // and seperate what is before the comma into the string and what is after into the integer variable
   
   printf("Enter a data point (-1 to stop input):\n");
   //Grab data as long as "-1" is not entered
   while(!inputDone) {
       //Grab entire line, store in userText
       fgets(userText, USER_TEXT_LIMIT, stdin);

       //Parse the line and check for correct number of entries.
       valuesRead = sscanf(userText, "%49s %49s %d", firstName, lastName, &novelNum);
       if(valuesRead >= 1 && strcmp(firstName, "-1") == 0) {
           
           inputDone = true;
       }
       else if (valuesRead == 3) {
           lastName[strlen(lastName)-1] = 0;
           printf("Data string: %s %s\n", firstName, lastName);
           printf("Data integer: %d\n", novelNum);
           //printf("First name: %s\n", firstName);
           //printf("Last name: %s\n", lastName);
           //printf("Novel number: %d\n", novelNum);
       }
       else {
           printf("Invalid entry. Please try again.\n\n");
       }

   }
 
    return 0;
}

// Function Definitions
