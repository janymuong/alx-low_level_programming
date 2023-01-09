#include <stdio.h>

/**
 * main - prints its name, followed by \n
 * @argc: count args passed
 * @argv: pointer to string array pointing to arguements
 * Return: exit code 0
 */
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);
	return (0);
}
