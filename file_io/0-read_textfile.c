#include "main.h"

/**
 *
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t rcount, wcount;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char *) * letters);
	if (!buffer)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0) /* access denied to file */
	{
		free(buffer);
		return (0);
	}
	rcount = read(fd, buffer, letters);
	if (rcount < 0) /* error on reading */
	{
		free(buffer);
		return (0);
	}
	wcount = write(STDOUT_FILENO, buffer, rcount);
	if (wcount != rcount || wcount < 0)
	{
		free(buffer);
		return (0);
	}
	close(fd);
	free(buffer);
	return (wcount);
}
