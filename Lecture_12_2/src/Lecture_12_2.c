#include <stdio.h>

void printCharacters(const char* sPtr)
{
	for ( ; *sPtr != 0; sPtr++)
	{
		printf("%c", *sPtr);
	}
}

int Lecture_12_2(int argc, char** argv)
{
	char string[] = "print characters of a string";

	printf("The string is:\n");
	printCharacters(string);
	printf("\n");

	return 0;
}

int main(int argc, char** argv)
{
	return Lecture_12_2(argc, argv);
}

