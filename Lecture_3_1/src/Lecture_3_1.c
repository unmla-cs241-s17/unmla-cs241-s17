#include <stdio.h>

#define SIZE 10

int Lecture_3_1(int argc, char** argv)
{
	int a[SIZE] = {2, 6, 4, 8, 10, 12, 89, 68, 45, 37};
	int pass;
	int i;
	int hold;

	printf("Data items in original order\n");
	for (i=0; i<SIZE; ++i)
	{
		printf("%4d", a[i]);
	}
	printf("\n");

	for (pass=1; pass<SIZE; pass++)
	{
		for (i=0; i<SIZE-1; i++)
		{
			if (a[i] > a[i+1])
			{
				hold = a[i];
				a[i] = a[i+1];
				a[i+1] = hold;
			}
		}
	}

	printf("Data items in ascending order\n");
	for (i=0; i<SIZE; ++i)
	{
		printf("%4d", a[i]);
	}
	printf("\n");

	return 0;
}

int main(int argc, char** argv)
{
	return Lecture_3_1(argc, argv);
}

