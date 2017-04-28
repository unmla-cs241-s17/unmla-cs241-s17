#include <stdio.h>

int Lecture_12_3(int argc, char** argv)
{
	int x;
	int y;

	int* const ptr = &x;

	*ptr = 7;
	ptr = &y;

	return 0;
}

int main(int argc, char** argv)
{
	return Lecture_12_3(argc, argv);
}

