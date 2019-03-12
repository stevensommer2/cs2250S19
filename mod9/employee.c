/*
 * =====================================================================================
 *
 *       Filename:  employee.c
 *
 *    Description:  Define an employee structure for record keeping
 *
 *        Version:  1.0
 *        Created:  03/12/2019 09:10:03 AM
 *       Revision:  none
 *       Compiler:  gcc employee.c -o employee.out -lm
            Usage:  ./employee.out
 *
 *         Author:  Steven Sommer (), steven.sommer@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>

// Constants and Globals
typedef struct Employee
{
    int idNum;
    double payRate;
    double hours;
}Employee;

// Function Prototypes

double CalcNet(Employee emp);   //pass by value
// Main Function
int main(int argc, char* argv[])
{
    double netPay = 0;
    Employee waldo = {1, 7.50, 20};
    netPay = CalcNet(waldo);
    printf("Hi Waldo, your net pay for %lf hours at %lf rate is %lf\n",
            waldo.hours, waldo.payRate, netPay);
    return 0;
}
// Function Definitions


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  CalcNet
 *  Description:  calculate the net pay based on payRate and hours
 *        PARAM:  Employee structure
 *       Return:  Net pay as a double
 * =====================================================================================
 */
double CalcNet(Employee emp)  //pass by value
{
    return emp.payRate * emp.hours;
}


