/*
 * =====================================================================================
 *
 *       Filename:  temperature.c
 *
 *    Description:  Play with temperature gc points
 *
 *        Version:  1.0
 *        Created:  01/15/2019 09:26:40 AM
 *       Revision:  none
 *       Compiler:  gcc temperature gc.c -o temperature gc
 *
 *         Author:  Steven Sommer (), steven.sommer@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
//const int CELSIUS = 0 //C++ way to do lines 21 and 22
//const int FAHRENHEIT = 0 //C++ way to do lines 21 and 22
#define CELSIUS 0
#define FAHRENHEIT 1
#define BOIL_CEL 100
#define BOIL_FAHR 212
#define FREEZE_CEL 0
#define FREEZE_FAHR 32
#define BOIL 1
#define LIQUID 2
#define FROZEN 3
// Constants


// Function Prototypes

// Main Function
int main()
{
    double in_temp, out_temp;
    
    int choice;
    int water_state = 0;
    //1) Ask user which temperature mode they want to use
    printf("Welcome to the temperature calculator\n");
    printf("Please enter your choice:\n");
    printf("\t0 for Celsius or 1 for Fahrenheit: ");
    scanf("%d", &choice);

    //2) Based on choice calculate celsius or fahrenheit.
    if(choice == 0) 
    {
        printf("Enter the temperature in Celsius: ");
        scanf("%lf", &in_temp);

        //Convert from celcius to Farenheit
        out_temp = (in_temp * 9/5) + 32;
        printf("Your temperature in Fahrenheit is: %lf\n", out_temp);

    }
    else if(choice == 1)
    {

        printf("Enter the temperature in Fahrenheit: ");
        scanf("%lf", &in_temp);

        //Convert from Fahrenheit t Celsius
        out_temp = (in_temp - 32) *5.0/9.0;

        printf("Your temperature in Celsius is: %lf\n", out_temp);
     }
    else
    {
        
        printf("Sorry, you did not enter 0 or 1\nTchuss Schwein\n");
        return 0;
        }
    //task 2
    //test for boiling point, greezing point, and liquid point
    if(choice == CELSIUS)
    {
        if(in_temp >= BOIL_CEL)
        {
            water_state = BOIL;
        }
        //&& is the AND operator
        else if (in_temp > FREEZE_CEL && in_temp < BOIL_CEL)
        {
            water_state = LIQUID;
        }
        else 
        {
            water_state = FROZEN;

        }
    }
    else   // FAHRENHEIT
    {
    

        if(in_temp >= BOIL_FAHR)
        {
        water_state = BOIL;
        }


        else if (in_temp > FREEZE_FAHR && in_temp < BOIL_FAHR)
        {
            water_state = LIQUID;
        }
        else 
        {
            water_state = FROZEN;
        }

    }
    //Switch 
    //&& -> AND
    //|| -> OR
    //! -> NOT
    //==
    //!=
    //>, <, >=, <=

    switch(water_state)
    {
        case BOIL:
            printf("Your water is boiling\n");
            break;  //exit your switch statement
        case LIQUID:
            printf("Your water is liquid\n");
            break;
        case FROZEN:
            printf("Your water is frozen\n");
            break;
    
    }


        /*
    
   

    
    // for temperature gcs use the %f placeholder
    
    printf("The temperature is %f Celsius\n", temp);
    printf("What is the temperature in Ogden now:");
    
    // use %f to capture temperature gc information
    // use %lf to capture double information
    scanf("%f", &temp);
    
    //Convert from celcius to Farenheit
    f_temp = (temp * 9/5) + 32;

    printf("I see, your temp is %lf in F.\n",f_temp);
*/
    //previous is a block comment. /* blocks all between*/


    return 0;
}
// Function Definitions


