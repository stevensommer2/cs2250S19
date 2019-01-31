/*
 * =====================================================================================
 *
 *       Filename:  monthDay.c
 *
 *    Description:  Take month and day from user, then verify 
 *                  entries are valid
 *
 *        Version:  1.0
 *        Created:  01/31/2019 09:16:59 AM
 *       Revision:  none
 *       Compiler:  gcc monthDay.c -o monthDay.out
 *
 *         Author:  Steven Sommer (), steven.sommer@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants
#define JANUARY     1
#define FEBRUARY    2
#define MARCH       3
#define APRIL       4
#define MAY         5
#define JUNE        6
#define JULY        7
#define AUGUST      8
#define SEPTEMBER   9
#define OCTOBER     10
#define NOVEMBER    11
#define DECEMBER    12
// Function Prototypes
// Function Prototypes
// Function Prototypes
// Function Prototypes
// Function Prototypes
// Function Prototypes
// Function Prototypes
// Function Prototypes
// Function Prototypes
// Function Prototypes
// Function Prototypes

// Main Function
int main()
{
    int day;
    int month;
    
    
    while(1)

    {



        // 1) capture user input



        printf("Please enter month: 1 for January, 12 for December\n");
        scanf("%d", &month);
        printf("Please enter the day: ");
        scanf("%d", &day);

        // 2) Use IF to validate month
        if (month > 12 || month < 1)
        {
            printf("You have entered an invalid day\n");
            return 1;
        }

        // 3) user Switch to validate day of the month
        switch(month)
        {
            //days with 31 days
            case JANUARY:
            case MARCH:
            case MAY:
            case JULY:
            case AUGUST:
            case OCTOBER:
            case DECEMBER:
                if (day > 31 || day < 1)
                {
                    printf("Invalid day\n");
                    return 1;
                }
                break;
                //days with 30 days
            case APRIL:
            case JUNE:
            case SEPTEMBER:
            case NOVEMBER:
                if (day > 30 || day < 1)
                {
                    printf("Invalid day\n");
                    return 1;
                }
                break;
                //February
            case FEBRUARY:
                if (day > 28 || day < 1)
                {
                    printf("Invalid day\n");
                    return 1;
                }
                break;
        }               //End of while loop
        return 0;
    }
}
// Function Definitions


