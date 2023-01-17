#include <stdio.h>

/**
 * main - print file name it was compiled from, & append '\0'
 *
 * Return: exit_success
 */
int main()
{
	printf("%s\n", __FILE__);
	return (0);
}
