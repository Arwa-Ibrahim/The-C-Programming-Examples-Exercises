#include <stdio.h>

// If we just put main this gives us warning that the return type is int
void main()
{
	/*
	* This is a simple programm to print Fahrenheit-Celsius table
	* for fahr = 0, 20, ..., 300 --> The floating point version.
	*/

	/*
	* The default output is left-justified.
	* To have a right-justified output we augment each %f
	* in the printf statement with a width and precision.
	*/

	/*
	* Exercise 3: Modify the program to print heading above the table.
	*/

	float fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	printf("Fahrenheit\t\tCelsius\n");

	fahr = lower;
	while (fahr <= upper)
	{
		celsius = (5.0 / 9.0) * (fahr - 32.0);
		printf("%10.0f\t\t%6.2f\n", fahr, celsius);
		fahr += step;
	}

}