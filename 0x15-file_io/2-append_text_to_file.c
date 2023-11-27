#include "main.h"
/**
 * append_text_to_file -  appends text at the end of a file
 * @filename: name of the file
 * @text_content: terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, letters, rwr;

	if (!filename)
		return (-1);
	file = open(filename, O_WRONLY | O_APPEND);

	if (file == -1)
		return (-1);
	if (text_content)
	{
		for (letters = 0; text_content[letters]; letters++)
			;
		rwr = write(file, text_content, letters);

		if (rwr == -1)
			return (-1);
	}
	close(file);
	return (1);
}
