#include "main.h"
/**
 * create_file - creates a file
 *
 * @filename: name of the file
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 * (file can not be created, file can not be written
 * write fails
 */
int create_file(const char *filename, char *text_content)
{
	int file_f, rwr, letters;

	if (!filename)
		return (-1);
	file_f = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file_f == -1)
		return (-1);
	if (!text_content)
		text_content = " ";
	for (letters = 0; text_content[letters]; letters++)
		;
	rwr = write(file_f, text_content, letters);

	if (rwr == -1)
		return (-1);
	close(file_f);
	return (1);
}
