#include<stdio.h>
int main()
{	

	int distance = 0;
	int time = 0;
	int velocity = 0;

	//1) Ask for distance in meters
	printf("Enter the distance in meters:\n");
	scanf("%d", &distance);

	//2) Aak for time in seconds
	printf("Enter time in seconds:\n");
	scanf("%d", &time);
	//3) Calculate and Display the velocity in km/hr
	velocity = distance/time;
	printf("Velocity (integer) is %d m/s\n", velocity);

	//1 km = 1000 meters
	//1 hr = 3600 seconds
	//TODO: fic the coredum related to floating point
	//velocity = (distance/1000)/(time/3600);
	//printf("Velocity (integer) is %d km/hr\n", velocity);


	return 0;
}

