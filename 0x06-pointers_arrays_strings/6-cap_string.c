#inlcude "main.h"

/**
 * cap_string - capitalizes all words of string
 * @s: input string
 * Return: s
 */

char *cap_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		while (!(s[i] >= 'a' && s[i] <= 'z'))
			i++;
		i--;
		if ([i] == ' ' ||
		s[i] == '\t' ||
		s[i] == '\n' ||
		s[i] == ',' ||
		s[i] == ';' ||
		s[i] == '.' ||
		s[i] == '!' ||
		s[i] == '?' ||
		s[i] == '"' ||
		s[i] == '(' ||
		s[i] == ')' ||
		s[i] == '{' ||
		s[i] == '}')
			s[i + 1] -= 32;
		i++;
		i++;
	}
}
