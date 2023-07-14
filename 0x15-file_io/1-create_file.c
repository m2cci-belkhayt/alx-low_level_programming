#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of file to be created
 * @text_content: string to be written to file
 * Return: 1 on success, -1 on fail
 */
int create_file(const char *filename, char *text_content)
{
	int file, writes, len = 0;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (file == -1)
		return (-1);

	if (!text_content)
	{
		close(file);
		return (1);
	}

	while (text_content[len])
		len++;

	writes = write(file, text_content, len);
	if (writes == -1)
		return (-1);

	close(file);
	return (1);
}
