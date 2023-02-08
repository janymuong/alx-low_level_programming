#include "main.h"
#include <string.h>

#define BUFSIZE 1024

void cp(char *file_from, char *file_to);
void print_error(char *file_name, int error_code);

/**
 * print_error - Prints the error message with the name of the file and the
 * error code
 * @file_name: The name of the file that caused the error
 * @error_code: The error code to print
 * Return: void
 */
void print_error(char *file_name, int error_code)
{
	dprintf(STDERR_FILENO, "Error: Can't %s from file %s\n",
		(error_code == 98 ? "read" : "write"), file_name);
	exit(error_code);
}

/**
 * cp - Copies the content of a file to another file
 * @file_from: The name of the file to copy from
 * @file_to: The name of the file to copy to
 * Return: void
 */
void cp(char *file_from, char *file_to)
{
	int fd_from, fd_to, read_num;
	char buf[BUFSIZE];

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
		print_error(file_from, 98);

	fd_to = open(file_to, O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (fd_to == -1)
		print_error(file_to, 99);

	while ((read_num = read(fd_from, buf, BUFSIZE)) > 0)
	{
		if (write(fd_to, buf, read_num) != read_num)
			print_error(file_to, 99);
	}

	if (read_num == -1)
		print_error(file_from, 98);

	if (close(fd_from) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from), exit(100);
	if (close(fd_to) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to), exit(100);
}

/**
 * main - Entry point
 * @argc: Number of arguments
 * @argv: Array of arguments
 * Return: 0 on success, else 1
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	cp(argv[1], argv[2]);
	return (0);
}
