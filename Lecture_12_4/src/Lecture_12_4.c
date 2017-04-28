#include <stdio.h>

int Lecture_12_4(int argc, char** argv)
{
	int x = 5;
	int y;

	const int* const ptr = &x;

	printf("%d\n", *ptr);
	*ptr = 7;
	ptr = &y;

	return 0;
}

int main(int argc, char** argv)
{
	return Lecture_12_4(argc, argv);
}

