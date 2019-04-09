/*
 * =====================================================================================
 *
 *       Filename:  strings_with_spaces.c
 *
 *    Description:  Take strings with spaces
 *
 *        Version:  1.0
 *        Created:  02/28/2019 09:02:53 AM
 *       Revision:  none
 *       Compiler:  gcc strings_with_spaces.c -o strings_with_spaces.out -lm
            Usage:  ./strings_with_spaces.out
 *
 *         Author:  Steven Sommer (), steven.sommer@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>   //strlen()
#include <ctype.h>  // islower() and toupper()

// Constants
const int INPUT_SIZE = 50;

// Function Prototypes
void StrSpaceToHyphen(char inputstr[]);
// Main Function
int main(int argc, char* argv[])
{
    char user_input[INPUT_SIZE];
    printf("Enter a string with spaces: ");
    //get user input including spaces     //1 where to , how many, where from
    fgets(user_input, INPUT_SIZE, stdin);  //takes 3 inputs
    //Overwrite the '\n' capture by pressing ENTER in the keyboard
    user_input[strlen(user_input) - 1] = '\0'; //set last char as NULL char
    printf("You entered [%s]\n", user_input);
    //explore this string char by char
   // for(int i = 0; i < strlen(user_input); i++)
   // {
   //     printf("%d char is [%c]\n", i, user_input[i]);
   // }
    StrSpaceToHyphen(user_input);
    printf("New string [%s]\n", user_input);
    return 0;
}
// Function Definitions


void StrSpaceToHyphen(char inputstr[]) {
   for(int i = 0; i < strlen(inputstr); i++)
   {
        if(inputstr[i] == ' ') {
            inputstr[i] = '-';
        }
        else if(islower(inputstr[i]))  {
            inputstr[i] = toupper(inputstr[i]);
        }
   }

    
    return;
}
