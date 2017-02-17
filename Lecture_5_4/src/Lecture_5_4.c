#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void appendChar(char argChar, char** argStr, unsigned long* argLength)
{
	char* tmpStr;

	if (NULL == (*argStr))
	{
		*argLength = 2;
		*argStr = malloc(2);
		(*argStr)[0] = argChar;
		(*argStr)[1] = 0;
	}
	else
	{
		*argLength += 1;
		tmpStr = malloc(*argLength);
		memcpy(tmpStr, *argStr, *argLength);
		tmpStr[(*argLength) - 2] = argChar;
		tmpStr[(*argLength) - 1] = 0;

		free(*argStr);
		*argStr = tmpStr;
	}
}

void escape(char** s, char* t)
{
	unsigned long idx;
	unsigned long sLen;

	if (NULL == t)
	{
		return;
	}

	if (NULL != *s)
	{
		return;
	}

	idx = 0;
	sLen = 0;
	while(0 != t[idx])
	{
		switch (t[idx])
		{
			case '\n':
				appendChar('\\', s, &sLen);
				appendChar('n', s, &sLen);
				break;
			case '\t':
				appendChar('\\', s, &sLen);
				appendChar('t', s, &sLen);
				break;
			default:
				appendChar(t[idx], s, &sLen);
				break;
		}

		++idx;
	}
}

int Lecture_5_4(int argc, char** argv)
{
	char charIn;
	char* s;
	char* t;
	unsigned long tLen;

	s = NULL;
	t = NULL;
	tLen = 0;

	while (EOF != (charIn = getchar()))
	{
		appendChar(charIn, &t, &tLen);
	}

	if (NULL != t)
	{
		escape(&s, t);

		if (NULL != s)
		{
			printf("%s", s);
			free(s);
			s = NULL;
		}

		free(t);
		t = NULL;
	}

	return 0;
}

int main(int argc, char** argv)
{
	return Lecture_5_4(argc, argv);
}

