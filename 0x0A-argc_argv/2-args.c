#include <stdio.h>
/**
 * main - print all arguments it receives.
 * @argc: number of command line argument.
 * @argv: array that contains the program line arg.
 * Return: (0) when succcessful.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
