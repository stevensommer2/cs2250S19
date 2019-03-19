/*
 * =====================================================================================
 *
 *       Filename:  grades_dyamically.c
 *
 *    Description:  enter number of grades dynamic mode
 *
 *        Version:  1.0
 *        Created:  03/19/2019 09:56:38 AM
 *       Revision:  none
 *       Compiler:  gcc grades_dyamically.c -o grades_dyamically.out -lm
            Usage:  ./grades_dyamically.out
 *
 *         Author:  Steven Sommer (), steven.sommer@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h> //this is needed for malloc(), exit(), free()

// Constants

// Function Prototypes

// Main Function
int main(int argc, char* argv[])
{
    int numGrades = 1;
    int* grades;

    printf("Enter the number of grades to be processed: ");
    scanf("%d", &numGrades);
    /* Here is wehre we request for memory*/
    //      <addressType> malloc(totalNumberOfBytes)
    //  We are creating a dynamically allocated array through a pointer
    grades = (int *)malloc(numGrades * sizeof(int));
    /*Check that you get a valid address. was the memory allocated? */
    if (grades == NULL)
    {
        printf("\nFailed. Could not allocate memory\n");
        exit(1);
    }
    /*Ready to go from here*/
    for(int i = 0; i < numGrades; i++)
    {
        printf("Enter a grade: ");
        scanf("%d", &grades[i]);
    }
    //Display info
    for(int i = 0; i < numGrades; i++)
    {
        printf(" %d\n", grades[i]);
    }
    //Free memory when you are done
    free(grades);

    return 0;
}
// Function Definitions


