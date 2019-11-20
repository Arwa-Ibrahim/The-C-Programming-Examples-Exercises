#include <stdio.h>

// If we just put main this gives us warning that the return type is int
void main()
{
	/*
	* The default output is left-justified.
	* To have a right-justified output we augment each %f
	* in the printf statement with a width and precision.
	*/

	/*
	* Exercise 4: Write a program to print the corresponding celsius to Fahrenheit table.
	*/

	float fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	printf("Celsius\t\tFahrenheit\n");

	celsius = lower;
	while (celsius <= upper)
	{
		fahr = ((9.0 / 5.0) * celsius) + 32.0;
		printf("%7.0f\t\t%3.0f\n", celsius, fahr);
		celsius += step;
	}

}