#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>

#define MAX_ARRAY_LEN 1000000

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

int linsearch(int x, int v[], int n)
{
	int i;

	for (i=0; i<n; i++)
	{
		if (x == v[i])
		{
			return i;
		}
	}

	return -1;
}

void reseed()
{
	struct timeval seed_t;

	gettimeofday(&seed_t, NULL);

	srand(seed_t.tv_usec);
}

void shellsort(int v[], int n)
{
	int gap, i, j, temp;

	for (gap = n/2; gap > 0; gap /= 2)
		for (i = gap; i < n; i++)
			for (j=i-gap; j>=0 && v[j]>v[j+gap]; j-=gap) {
				temp = v[j];
				v[j] = v[j+gap];
				v[j+gap] = temp;
			}
}

int Lecture_5_5(int argc, char** argv)
{
	int array[MAX_ARRAY_LEN];
	int idx;
	int val;
	struct timeval start_t;
	struct timeval end_t;
	double total_t;

	reseed();

	for (idx=0; idx<MAX_ARRAY_LEN; ++idx)
	{
		array[idx] = rand();
	}

	val = array[
		(int)
		(MAX_ARRAY_LEN * (rand() / ((double)RAND_MAX)))
	];

	gettimeofday(&start_t, NULL);
	idx = linsearch(val, array, MAX_ARRAY_LEN);
	gettimeofday(&end_t, NULL);

	total_t = (end_t.tv_sec - start_t.tv_sec) +
		(end_t.tv_usec - start_t.tv_usec) / 1000000.0;
	printf("\nlinsearch found %d at idx %d in %gs\n", val, idx, total_t);

	gettimeofday(&start_t, NULL);
	shellsort(array, MAX_ARRAY_LEN);
	idx = binsearch_mod(val, array, MAX_ARRAY_LEN);
	gettimeofday(&end_t, NULL);

	total_t = (end_t.tv_sec - start_t.tv_sec) +
		(end_t.tv_usec - start_t.tv_usec) / 1000000.0;
	printf("\nbinsearch_mod found %d at idx %d in %gs\n", val, idx, total_t);

	return 0;
}

int main(int argc, char** argv)
{
	return Lecture_5_5(argc, argv);
}

