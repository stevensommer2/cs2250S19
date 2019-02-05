/*
 * =====================================================================================
 *
 *       Filename:  while.c
 *
 *    Description:  Learn while loops 
 *
 *        Version:  1.0
 *        Created:  02/05/2019 08:37:24 AM
 *       Revision:  none
 *       Compiler:  gcc while.c -0 while.out
 *
 *         Author:  Steven Sommer (), steven.sommer@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants
#define MAXCOUNT 5
#define MINCOUNT 2
// Function Prototypes

// Main Function
int main()
{
    // Task 1: Calulate the average of user input values.
    // Task 2: Validate user input for 0 to 100 only
    // Task 3: Ask user how many values they need to enter.
    // task 4: If user enters a number below MINCOUNT set it MINCOUNT
    //         and if user enters a calue greater than MAXCOUNT,
    //         set it to MAXCOUNT
    // Task 5: Support multiple student entries. Calculate class average.
    // Task 6: Display student letter grade.
    int count = 0;
    float grade, avg;
    float total = 0;
    int studentCount = 0;

    printf("How many grades would you like to average? between  %d and %d?\n", MINCOUNT,  MAXCOUNT);
    scanf("%d", &studentCount);

        if(studentCount > MAXCOUNT)  {
            printf("%d is more than %d. Setting your entry to %d\n",
                    studentCount, MAXCOUNT, MAXCOUNT);
            studentCount = MAXCOUNT;
        }
        if(studentCount < MINCOUNT)  {
            printf("%d is less than %d. Setting your entry to %d\n",
                    studentCount, MINCOUNT, MINCOUNT);
            studentCount = MINCOUNT;
        }

    while (count < MAXCOUNT) 
    {
        printf("Enter %d hw grades(0-100): ", count + 1);
        scanf("%f", &grade);

            if (grade > 100 || grade < 0)
            {
                printf("invalid input. Please try again.");

            continue;   //invalid input
            }
        total += grade; //add up grades

        
        //update test condition: sentinel
        count++;
        if(count == studentCount)
        {
            break;      //reach the studentCount
        }
    }
    avg = total / studentCount;   //calculate the average
    printf("Your avg is [%6.2f]\n", avg);
    printf("Tchuss Schwein\n");


    return 0;
}
// Function Definitions


