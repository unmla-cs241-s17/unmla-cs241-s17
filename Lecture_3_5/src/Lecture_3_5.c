#include <stdio.h>
#define MAXLINE 1000

void copy(char to[], char from[])
{
	int i;

	i = 0;
	while((to[i] = from[i]) != '\0')
		++i;
}

int my_getline(char s[], int lim)
{
	int c, i;

	for (i=0; i<lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
		s[i] = c;
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

int Lecture_3_5(int argc, char** argv)
{
	int len;
	int max;
	char line[MAXLINE];
	char longest[MAXLINE];

	max = 0;
	while (0 < (len = my_getline(line, MAXLINE)))
	{
		if (len > max) {
			max = len;
			copy(longest, line);
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
	return Lecture_3_5(argc, argv);
}

