#include "main.h"

/**
 *
 *
 *
 */
int create_file(const char *filename, char *text_content)
{
	int fd, wcount;

	if (!filename)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);
	wcount = write(fd, text_content, strlen(text_content));
	if (wcount < 0)
		return (-1);
	close(fd);
	return (1);
}
