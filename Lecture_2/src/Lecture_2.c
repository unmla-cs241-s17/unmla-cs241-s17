#include <stdio.h>

#define G_LOWER 0
#define G_UPPER 300
#define G_STEP 20

int main(int argc, char** argv)
{
	float fahr;
	int lower;
	int upper;
	int step;

	lower = G_LOWER;
	upper = G_UPPER;
	step = G_STEP;

	printf("Farenheit\tCelsius\n");
	for (fahr = lower; fahr <= upper; fahr += step)
	{
		printf(
			"%3.0f\t\t%6.1f\n",
			fahr,
			(5.0/9.0) * (fahr - 32.0)
		);
	}

	return 0;
}

