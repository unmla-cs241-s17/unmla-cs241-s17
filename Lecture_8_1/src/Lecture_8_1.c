#include <stdio.h>

int Lecture_8_1(int argc, char** argv)
{
	int a;
	int* aPtr;

	a = 7;
	aPtr = &a;

	printf("The address of a is %p\n"
		"The value of aPtr is %p\n", &a, aPtr);

	printf("The address of a is %d\n"
		"The value of aPtr is %d\n", a, *aPtr);

	printf("Showing that * and & are complements of each other\n"
		"&*aPtr = %p\n"
		"*&aPtr = %p\n", &*aPtr, *&aPtr);

	return 0;
}

int main(int argc, char** argv)
{
	return Lecture_8_1(argc, argv);
}

