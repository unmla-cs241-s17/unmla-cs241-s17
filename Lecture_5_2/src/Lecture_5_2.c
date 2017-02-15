#include <stdio.h>
#include <sys/time.h>

#define MAX_ARRAY_LEN 1000000

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

int binsearch_mod(int x, int v[], int n)
{
	int low, high, mid;

	low = 0;
	high = n - 1;
	while (low < high) {
		mid = (low+high) / 2;
		if (x <= v[mid])
			high = mid;
		else
			low = mid + 1;
	}

	return (x == v[low])?low : -1;
}

int Lecture_5_2(int argc, char** argv)
{
	int array[MAX_ARRAY_LEN];
	int idx;
	int val;
	struct timeval start_t;
	struct timeval end_t;
	double total_t;

	for (idx=0; idx<MAX_ARRAY_LEN; ++idx)
	{
		array[idx] = idx;
	}

	val = 101;

	gettimeofday(&start_t, NULL);
	idx = binsearch(val, array, MAX_ARRAY_LEN);
	gettimeofday(&end_t, NULL);

	total_t = (end_t.tv_sec - start_t.tv_sec) +
		(end_t.tv_usec - start_t.tv_usec) / 1000000.0;
	printf("\nFound %d at idx %d in %gs\n", val, idx, total_t);

	gettimeofday(&start_t, NULL);
	idx = binsearch_mod(val, array, MAX_ARRAY_LEN);
	gettimeofday(&end_t, NULL);

	total_t = (end_t.tv_sec - start_t.tv_sec) +
		(end_t.tv_usec - start_t.tv_usec) / 1000000.0;
	printf("\nFound %d at idx %d in %gs\n", val, idx, total_t);

	return 0;
}

int main(int argc, char** argv)
{
	return Lecture_5_2(argc, argv);
}

