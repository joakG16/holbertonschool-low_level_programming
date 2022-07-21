#include "main.h"

/**
 *
 *
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd < 0)
		return (-1);

	if (text_content != NULL)
		write(fd, text_content, strlen(text_content));

	close(fd);

	return (1);
}
