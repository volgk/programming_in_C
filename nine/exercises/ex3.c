// Program to represente the elapsed time

#include <stdio.h>

struct time
{
	int hour;
	int minutes;
	int seconds;
};


int main (void)
{
	int    durationInSeconds;
	struct time time1, time2, t;
	
	struct time transformFromSeconds (int seconds);
	int    transformInSeconds (struct time d);

	printf("Type the first time (hh:mm:ss): ");
	scanf ("%i:%i:%i", &time1.hour, &time1.minutes, &time1.seconds);

	printf("Type the second time (hh:mm:ss): ");
	scanf ("%i:%i:%i", &time2.hour, &time2.minutes, &time2.seconds);

	if (time1.hour > time2.hour)
		time1.hour = - (24 - time1.hour);

	durationInSeconds = transformInSeconds (time2) - transformInSeconds (time1);
	t = transformFromSeconds (durationInSeconds);
	
	printf("time from seconds = %.2i:%.2i:%.2i\n",
			t.hour, t.minutes, t.seconds);

	return 0;
}


// Function to transform the time in seconds

int transformInSeconds (struct time d)
{
	int seconds;

	seconds = d.seconds + d.minutes * 60 + d.hour * 60 * 60;

	return seconds;
}

// Function to transform the seconds in time

struct time transformFromSeconds (int seconds)
{
	struct time t = {0, 0, seconds};

	t.minutes = (t.seconds / 60) % 60;
	t.hour = (t.seconds / 60) / 60;
	t.seconds = t.seconds % 60;

	return t;
}
