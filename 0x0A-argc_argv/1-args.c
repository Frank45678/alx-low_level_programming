#include <stdio.h>
/**
 * main - print the number of arguments passed into it.
 * @argc: number of command line argument.
 * @argv: array that contains the program line arg.
 * Return: (0) when successful.
 */
int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
