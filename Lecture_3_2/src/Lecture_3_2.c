#include <stdio.h>

int power(int, int);

int Lecture_3_2(int argc, char** argv)
{
	int i;

	for (i=0; i<10; ++i)
	{
		printf("%d, %d, %d\n", i, power(2, i), power(-3, i));
	}

	return 0;
}

int main(int argc, char** argv)
{
	return Lecture_3_2(argc, argv);
}

