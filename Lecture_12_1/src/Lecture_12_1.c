#include <ctype.h>
#include <stdio.h>

void convertToUppercase(char* sPtr)
{
	while (*sPtr != 0)
	{
		if (islower(*sPtr))
		{
			*sPtr = toupper(*sPtr);
		}

		++sPtr;
	}
}

int Lecture_12_1(int argc, char** argv)
{
	char string[] = "characters and $32.98";

	printf("Before:\t'%s'\n", string);
	convertToUppercase(string);
	printf("After:\t'%s'\n", string);

	return 0;
}

int main(int argc, char** argv)
{
	return Lecture_12_1(argc, argv);
}

