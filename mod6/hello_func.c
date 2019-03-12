/*
 * =====================================================================================
 *
 *       Filename:  hello_func.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/19/2019 08:49:41 AM
 *       Revision:  none
 *       Compiler:  gcc hello_func.c -o hello_func.out
 *
 *         Author:  Steven Sommer (), steven.sommer@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants

// Function Prototypes
void Hello_World();
void Hello_Number(int num);
int Get_Square(int num);
int Get_Number();
int Get_sum(int num1, int num2);

// Main Function
int main(int argc, char* argv[])
{
    int i1 = 23;
    int num1, num2, sum;
    Hello_World();

    Hello_Number(i1);

    i1 = Get_Square(i1);
    Hello_Number(i1);

    i1 = Get_Number();
    Hello_Number(i1);

    num1 = Get_Number();
    Hello_Number(num1);

    num2 = Get_Number();
    Hello_Number(num2);

    sum = Get_sum(num1, num2);
    Hello_Number(sum);
    return 0;
}
// Function Definitions
// To document your functions type: ,cfu

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  Hello World
 *  Description:  Print Hello world message
 * =====================================================================================
 */
void Hello_World()
{
    printf("Hello world\n");
    return;
}



/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  hello number
 *  Description:  Prints the value of a number
 *         Parm: Num >=  integer value
 *       Return: nothing
 * =====================================================================================
 */
void Hello_Number(int num)
{
    int i1 = 23;
    printf("Hello %ls number\n", &i1);
    return;
}




/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  Get_Square
 *  Description:  get the sqaure of an int
 *  param1: num>= integer value
 *  return: the square of num
 * =====================================================================================
 */
int Get_Square(int num)
{
    int square;
    //algorith
    square = num * num;
    return square;
}


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  Get_Number
 *  Description:  Ask user to enter an integer
 *        Param: None
 *       Return: User int input
 * =====================================================================================
 */
int Get_Number()
{
    int input;
    //algorithm
    printf("Please enter an int value:  ");
    scanf("%d", &input);
    return input;


}


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  Get_sum
 *  Description:  
 *  Param1: First integer
 *  Param2: Second integer
 *  Return: First + second
 * =====================================================================================
 */

int Get_Sum(int num1, int num2)
{
    return num1 + num2;
}

