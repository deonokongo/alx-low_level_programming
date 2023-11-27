#include "main.h"
/**
 * read_textfile - reads a text file and prints it to
 * the POSIX standard output
 * @filename: name of the file
 * @letters: the number of letters it should read and print
 * Return: actual number of letters it could read and print
 * if the file can not be opened or read, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_s;
	ssize_t lenr, lenw;
	char *ch;

	if (filename == NULL)
		return (0);
	file_s = open(filename, O_RDONLY);
	if (file_s == -1)
		return (0);
	ch = malloc(sizeof(char) * letters);
	if (ch == NULL)
	{
		close(file_s);
		return (0);
	}
	lenr = read(file_s, ch, letters);
	close(file_s);
	if (lenr == -1)
	{
		free(ch);

	}
	lenw = write(STDOUT_FILENO, ch, lenr);
	free(ch);
	if (lenr != lenw)
		return (0);
	return (lenw);
}
