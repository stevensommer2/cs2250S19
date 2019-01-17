#include<stdio.h>

int main()
{
	int wage = 0;
	int hours = 0;
	


	
	// 1) Ask for the hours worked this week.
	
	printf("Hours worked this week.:\n");
	scanf("%d", &hours);

	// 2) Ask for the wage of the employee.
	
	printf("Hourly wage: \n");
	scanf("%d", &wage);

	// 3) calculate how much has been made in the week.
	
	
	printf("You have made $%d this week. \n", hours * wage);



	return 0;

}
