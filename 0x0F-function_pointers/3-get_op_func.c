#include <stdio.h>
#include "3-calc.h"
/**
 * get_op_func - function that selects the correct operation
 * @s: char operation
 *
 * Return: pointer to the correct func
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
	int i = 0;


	while (ops->op == s)
	{

		if (ops->op == NULL || ops->f == NULL)
			return (NULL);
		i++;
		return (ops->f);

	}
	return (NULL);
}
