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
 *       Compiler:  gcc use_employee.c employee.c -o employee.out -lm
            Usage:  ./employee.out
 *
 *         Author:  Steven Sommer (), steven.sommer@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include "employee.h"


// Constants and Globals
typedef struct Employee
{
    int idNum;
    double payRate;
    double hours;
    double netPay;
    double taxRate;
    double grossPay;

}Employee;

#define TAXRATE1 0.10  //10%
#define TAXRATE2 0.25  //25%
#define TAXRATE3 0.75  //75%

#define TOTAL 5
// Function Prototypes

double CalcNet(Employee emp);   //pass by value
double CalcGross(Employee* emp);  // pass by reference
void CreateEmployee(Employee* emp, idNum);
void CalcPay(Employee* emp);
void DisplayEmp(const Employee* emp);
// Main Function
//int main(int argc, char* argv[])
//{
  //  Employee waldo;

    //CreateEmployee(&waldo);
   // CalcPay(&waldo);
   // DisplayEmp(&waldo);
    
/*
    Employee waldo = {1, 7.50, 20};

    waldo.taxRate = TAXRATE1;



    waldo.netPay = CalcNet(waldo);  //pass by value
    printf("Hi Waldo, your net pay for %lf hours at %lf rate is %lf\n",
            waldo.hours, waldo.payRate, waldo.netPay);
    

    waldo.grossPay = CalcGross(&waldo);    //pass by reference
    printf("Hi Waldo, your gross pay for %lf hours at %lf rate is %lf\n",
            waldo.hours, waldo.payRate, waldo.grossPay);
*/

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
   
    return emp.payRate * emp.hours * (1 - emp.taxRate);
}



/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  CalcGross
 *  Description:  calculate the gross pay based on payRatte and hours
 *        PARAM:  Employee structure
 *       Return:  Gross pay as double
 * =====================================================================================
 */
double CalcGross(Employee* emp)
{
    //to access structure members when using a pointer(address
    //use the dereference operator  ->
   
    return emp->payRate * emp->hours;
}



/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  CreateEmployee
 *  Description:  create employee record
 *       PARAM:   Employee structure
 * =====================================================================================
 */
void CreateEmployee(Employee* emp)
{
    emp->idNum = 1;
    emp->payRate= 7.50;
    emp->hours= 20;
    emp->taxRate = TAXRATE1;
    return;

}



/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  CalcPay
 *  Description:  calculate the Gross and Net pay for the employee
 *       PARAM:   Employee structure
 * =====================================================================================
 */
void CalcPay(Employee* emp)
{
    //Note: emp in an address(pointer), so if youe need to pass it to a function
    //that requires a pointer, then just use the name: emp
    //if you need to pass the VALUES, you need to dereference the reference
    //so use the *emp to access the values at the address
    emp->netPay = CalcNet(*emp);
    emp->grossPay = CalcGross(emp);
    return;

}



/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  DisplayEmp
 *  Description:  print employee information
 * =====================================================================================
 */
void DisplayEmp(const Employee* emp)
{
    
    printf("Hi Waldo, your net pay for %lf hours at %lf rate is %lf\n",
            emp->hours, emp->payRate, emp->netPay);
    

    grossPay = CalcGross(&waldo);    //pass by reference
    printf("Your gross pay is %lf\n",
            emp->grossPay);

    return;

}


