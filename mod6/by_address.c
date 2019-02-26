/*
 * =====================================================================================
 *
 *       Filename:  by_address.c
 *
 *    Description:  Learn how to pass information to functions by reference
 *
 *        Version:  1.0
 *        Created:  02/26/2019 08:36:21 AM
 *       Revision:  none
 *       Compiler:  gcc by_address.c -o by_address.out
 *
 *         Author:  Steven Sommer (), steven.sommer@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
// Constants


// Function Prototypes
void DisplayPosition(double x, double y);
void DisplayOriginalPosition(const double* x, const double* y);  //* stores ADDRESS of double
void UpdatePosition(double* x, double* y, double new_x, double new_y);
void ResetPosition(double* x, double* y);

// Main Function
int main(int argc, char* argv[])
{
    double x, y;
    if(argc != 3) {

        printf("Usage: %s <X_POS> <Y_POS>\n", argv[0]);
        return 1;
    }
    x = atof(argv[1]);    //convert the first input param to double
    y = atof(argv[2]);    //convert the first input param to double
   // printf("Your current position address is (%p, %p) (main)\n", &x, &y);
    DisplayOriginalPosition(&x, &y);  //takes two adresses of type double
    //DisplayPosition(x, y);
    UpdatePosition(&x, &y, 2.0, 4.1);
    
   // DisplayOriginalPosition(&x, &y);    //takes two adresses of type double
    ResetPosition(&x, &y);              //reset values to origin
    //DisplayOriginalPosition(&x, &y);    // takes two address as doubles
    //DisplayPosition(x, y);
    return 0;
}
// Function Definitions

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  displayPosition
 *  Description:  Display current point position
 *        PARAM:  X => x coordinate
 *        PARAM:  y => y coordinate
 *      Returns:  nothing
 * =====================================================================================
 */
void DisplayPosition(double x, double y) {
    printf("Your current position is (%4.2lf, %4.2lf)\n", x, y);

    printf("Your current position address is (%p, %p)\n", &x, &y);
}

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  UpdatePosition
 *  Description:  Display current point position
 *        PARAM:  x => x coordinate address
 *        PARAM:  y => y coordinate address
 *        PARAM:  new_x => update x
 *        PARAM:  new_y => update y
 *      Returns:  nothing
 * =====================================================================================
 */
void UpdatePosition(double* x, double* y, double new_x, double new_y)  {
    printf("******Updating position******\n");
    DisplayPosition(*x, *y);
    *x = new_x;
    *y = new_y;
    
    printf("******Done Updating position******\n"); 
    return;
}


// Function Definitions

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  displayOriginalPosition
 *  Description:  Display current point position
 *        PARAM:  X => x coordinate address
 *        PARAM:  y => y coordinate address
 *      Returns:  nothing
 * =====================================================================================
 */
void DisplayOriginalPosition(const double* x, const double* y) {
                        //const causes a read-only atmosphere 
    printf("Your current position is (%4.2lf, %4.2lf) (orig)\n", *x, *y);
    printf("Your current original position address is (%p, %p) (orig)\n", x, y);
    // to display the values of pointers / address use the dereference
    // operator "*". This only applies to pointer.
    
}

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  ResetPosition
 *  Description:  Reset to original position (0,0)
 *        PARAM: x => x coordinate
 *        PARAM: y => y coordinate
 *     returns: nothing
 * =====================================================================================
 */
void ResetPosition(double* x, double* y) {
    *x = 0;
    *y = 0;

    return;
}


