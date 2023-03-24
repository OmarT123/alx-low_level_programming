#include "3-calc.h"

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
		{"%", op_mod}
	};
	int i = 0;

	while (i < 5)
	{
		if (ops[i].op == s)
		{
			return (ops[i].f);
		}
	}
	return (0);
}
