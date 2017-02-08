#include <stdio.h>

#define MAXLINE 1000

int max;
char line[MAXLINE];
char longest[MAXLINE];

void copy()
{
	int i;
	extern char line[], longest[];

	i = 0;
	while((longest[i] = line[i]) != '\0')
		++i;
}

int my_getline()
{
	int c, i;
	extern char line[];

	for (i=0; i<MAXLINE-1 && (c=getchar())!=EOF && c!='\n'; ++i) {
		line[i] = c;
	}
	if (c == '\n') {
		line[i] = c;
		++i;
	}
	line[i] = '\0';
	return i;
}

int Lecture_3_6(int argc, char** argv)
{
	int len;
	extern int max;
	extern char longest[];

	max = 0;
	while (0 < (len = my_getline()))
	{
		if (len > max) {
			max = len;
			copy();
		}
	}

	if (0 < max)
	{
		printf("%s", longest);
	}

	return 0;
}

int main(int argc, char** argv)
{
	return Lecture_3_6(argc, argv);
}

