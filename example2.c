#include <stdio.h>

// If we just put main this gives us warning that the return type is int
void main()
{
	/*
	* This is a simple programm to print Fahrenheit-Celsius table
	* for fahr = 0, 20, ..., 300
	*/

	/*
	* The default output is left-justified.
	* To have a right-justified output we augment each %d
	* in the printf statement with a width.
	*/

	int fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;
	while (fahr <= upper)
	{
		// We can't use (5/9) because it's an integer division = zero
		celsius = 5 * (fahr - 32) / 9;
		printf("%3d\t%6d\n", fahr, celsius);
		fahr += step;
	}

	///////////////////////////////////////////////////////////////////

	/*
	* This is a simple programm to print Fahrenheit-Celsius table
	* for fahr = 0, 20, ..., 300 --> The floating point version.
	*/

	/*
	* The default output is left-justified.
	* To have a right-justified output we augment each %f
	* in the printf statement with a width and precision.
	*/

	float fahr2, celsius2;

	fahr2 = lower;
	while (fahr2 <= upper)
	{
		celsius2 = (5.0 / 9.0) * (fahr2 - 32.0);
		printf("%3.0f\t%6.2f\n", fahr2, celsius2);
		fahr2 += step;
	}

}