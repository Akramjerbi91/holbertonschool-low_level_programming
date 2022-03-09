#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

int main(int argc, char *argv[])
{	
	int result;
	char *operator[] = {"+","-","*","/","%"};


	result = get_op_func(argv[2])(atoi(argv[1]),atoi(argv[3]));
	if (argc != 4)

	{	
		printf("Error\n");
		exit(98);
	}
	
        if (argv[2] != *operator)
	{
		printf("Error\n");
		exit(99);
	}
	if ((argv[2] == operator[3] || argv[2] == operator[4]) && argv[3] == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n",result);
	return (0);
}
