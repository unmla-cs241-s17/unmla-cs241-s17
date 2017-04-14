#include <stdio.h>

void printArray(int a[][3])
{
	int i;
	int j;

	for (i=0; i<=1; i++)
	{
		for (j=0; j<=2; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}

int Lecture_9_1(int argc, char** argv)
{
	int array1[2][3] = { { 1, 2, 3 }, { 4, 5, 6 } };
	int array2[2][3] = { 1, 2, 3, 4, 5 };
	int array3[2][3] = { { 1, 2}, { 4 } };

	printf("Values in array1 by row are:\n");
	printArray(array1);

	printf("Values in array2 by row are:\n");
	printArray(array2);

	printf("Values in array3 by row are:\n");
	printArray(array3);

	return 0;
}

int main(int argc, char** argv)
{
	return Lecture_9_1(argc, argv);
}

