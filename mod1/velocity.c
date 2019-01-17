#include<stdio.h>

int main() 
{
	// 1) Ask for a distance in meters
	// 2) Ask for a time in seconds
	// 3) Calculate velocity in km/hr
	
	int distance = 1735;
	int time = 3;

	printf("What is the distance you traveled?\n");
	printf("I have traveled %d meters\n", distance);

	printf("How much time did it take you?\n");
	printf("It took me %d seconds.\n", time);

	printf("Your velocity is %d  meters per second.\n", (distance / 1000) / (time / 3600));





	return 0;

}
