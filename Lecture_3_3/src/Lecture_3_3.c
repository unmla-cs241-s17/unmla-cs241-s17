#include <stdio.h>

int Lecture_3_3(int argc, char** argv)
{
	char array[5];

	printf("array = %p\n&array[0] = %p\n&array = %p\n",
		array, &array[0], &array);

	return 0;
}

int main(int argc, char** argv)
{
	return Lecture_3_3(argc, argv);
}

