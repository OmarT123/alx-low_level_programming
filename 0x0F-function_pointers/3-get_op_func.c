#include "calc.h"

/**
 * get_op_func - finds appropriate operator
 * @s: char input
 * Return: pointer to function to operator
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	while (i < 5)
	{
		if (ops[i][0] == s)
		{
			return (ops[i][1]);
		}
	}
	return (NULL);
}
