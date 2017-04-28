#include <stdio.h>

union number
{
	int x;
	double y;
};

int Lecture_12_5(int argc, char** argv)
{
	union number value;

	value.x = 100;
	printf("int 100\n");
	printf("value.x:\t%d\n", value.x);
	printf("value.y:\t%f\n", value.y);

	value.y = 100.0;
	printf("double 100.0\n");
	printf("value.x:\t%d\n", value.x);
	printf("value.y:\t%f\n", value.y);

	return 0;
}

int main(int argc, char** argv)
{
	return Lecture_12_5(argc, argv);
}

