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
 *       Compiler:  gcc avgGradesMC.c -0 avgGravesMC.out
 *
 *
 *         Author:  Steven Sommer (), steven.sommer@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdbool.h>    //for true and false variables
#include <stdlib.h>    // for rand(), srand()
#include <time.h>       //time()
// Constants
#define MAXCOUNT 5
#define MINCOUNT 2
#define MINGRADE 0
#define MAXGRADE 100
#define MAXSTUDENTS 3

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
    int gradeCount = 0, studentCount = 1;
    float grade, avg;
    float total = 0, classAvg = 0;
    int hwCount;
    
    srand(time(0));     //set random seed

    for(studentCount = 1; studentCount <= MAXSTUDENTS; studentCount++)             //Loop over students
    {
        printf("Processing %d student grades\n", studentCount);
        printf("How many grades would you like to average? between  %d and %d?\n", MINCOUNT,  MAXCOUNT);
        //scanf("%d", &hwCount);
        hwCount = rand() % 10;
        if(hwCount > MAXCOUNT)  {
            printf("%d is more than %d. Setting your entry to %d\n",
                    hwCount, MAXCOUNT, MAXCOUNT);
            hwCount = MAXCOUNT;
        }
        if(hwCount < MINCOUNT)  {
            printf("%d is less than %d. Setting your entry to %d\n",
                    hwCount, MINCOUNT, MINCOUNT);
            hwCount = MINCOUNT;
        }
        //loop over student grades
        while (gradeCount < MAXCOUNT) 
        {
            printf("Enter %d hw grades(%d-%d): \n ", gradeCount + 1, MINGRADE, MAXGRADE);
            //scanf("%f", &grade);
            grade = rand() % 100; //get a random number 0-150
            printf("%f\n", grade);
            //"randomly" make it negative
            //grade = grade - (rand() % 100);  //subtract a random 0-100 number.
            if (grade > MAXGRADE || grade < MINGRADE)
            {
                printf("invalid input. Please try again.\n");
                continue;   //invalid input
            }
            total += grade; //add up grades
            //update test condition: sentinel
            gradeCount++;
            if(gradeCount == hwCount)
            {
                break;      //reach the hwCount
            }
        }               //End of one student 
        avg = total / hwCount;   //calculate the average
        printf("Your avg is [%6.2f]\n", avg);

        classAvg = classAvg + avg;
        //reset value
        gradeCount = 0;
        total = 0;


    }           //End of students loop
    classAvg = classAvg / MAXSTUDENTS;
    printf(" Your class avg is [%6.2f]\n", classAvg);
    printf("Tchuss Schwein\n");


    return 0;
}
// Function Definitions


