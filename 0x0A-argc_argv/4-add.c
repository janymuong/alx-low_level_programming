#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints sum of positive intgers, followed by \n
 * @argc: count args passed
 * @argv: pointer to string array pointing to arguements
 * Return: exit code 0
 */
int main(int argc, char **argv)
{
	int i, sum_positive = 0;

	if (argc < 1)
		return (0);

	for (i = 1; i < argc; i++)
	{
		if (!atoi(argv[i]))
		{
			printf("%s\n", "Error");
			return (1);
		}
		sum_positive += atoi(argv[i]);
	}
	printf("%d\n", sum_positive);

	return (0);
}
