#include "main.h"
#define BUF_SIZE 1024
#define MODE 0664

/**
 *_close - check if it can close the file descriptor
 *@filedes: fd passed from function main
 */
void _close(int filedes)
{
	int value;

	value = close(filedes);

	if (value == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", filedes);
		exit(100);
	}
}

/**
 *main - a program that copies the content of a file to another file.
 *@argc: argument count
 *@argv: argument vector
 *
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int src, dst, in, out;
	char buf[BUF_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	src = open(argv[1], O_RDONLY);
	if (src < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	dst = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, MODE);
	if (dst < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while (1)
	{
		in = read(src, buf, BUF_SIZE);
		if (in < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		out = write(dst, buf, in);
		if (out < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	_close(src);
	_close(dst);
	return (0);
}
