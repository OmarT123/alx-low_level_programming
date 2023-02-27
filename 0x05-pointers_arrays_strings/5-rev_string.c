#include "main.h"

/**
 * rev_string - reverses an input string
 * @s: input string
 */

void rev_string(char *s)
{
	int j = 0;
	int i = 0;
	char t;

	while (s[j] != '\0')
		j++;
	j--;
	while (i < j)
	{
		t = s[i];
		s[i] = s[j];
		s[j] = t;
	}
}
