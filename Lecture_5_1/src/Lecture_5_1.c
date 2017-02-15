#include <stdio.h>

int binsearch(int x, int v[], int n)
{
	int low, high, mid;

	low = 0;
	high = n - 1;
	while (low <= high) {
		mid = (low+high) / 2;
		if (x < v[mid])
			high = mid - 1;
		else if (x > v[mid])
			low = mid + 1;
		else
			return mid;
	}

	return -1;
}

int Lecture_5_1(int argc, char** argv)
{
	int array[4] = {1, 20, 101, 50212};
	int idx;
	int val;

	for (idx=0; idx<4; ++idx)
	{
		printf("%d:\t%d\n", idx, array[idx]);
	}

	val = 101;
	idx = binsearch(val, array, 4);

	printf("\nFound %d at idx %d\n", val, idx);

	return 0;
}

int main(int argc, char** argv)
{
	return Lecture_5_1(argc, argv);
}

