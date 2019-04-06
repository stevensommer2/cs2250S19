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

int main(void) {

   /* Type your code here. */
   //(1) Prompt the user for a title for data. Output the title. (1 pt) 
   char title[50];
   char fColumn[50];
   char sColumn[50];
   char *firstName1[50];
   char *lastName1[50];
   //char AuthName2[50];
   //char AuthName3[50];
   int NovelNum1 = 0;
   //int NovelNum2[50];
   //int NovelNum3[50];
   
   
   printf("Enter a title for the data:\n");
   printf("You entered: ");
   fgets(title, 50, stdin);
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
   scanf("%s %s, %d", &firstName1, &lastName1, NovelNum1);
   printf("Data string: %s %s\n", firstName1, lastName1);
   printf("Data integer: %d\n:", NovelNum1);
 
    return 0;
}
// Function Definitions


