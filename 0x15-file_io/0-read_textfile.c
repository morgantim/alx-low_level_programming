#include "main.h"
/**
 * read_textfile - reads a text and prints it to the stout
 * @filename: is the name of the created file
 * @letters: is the number of letters it should read and print
 * Return: number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t wRet = 0, oRet = 0, rRet = 0;
	char *text;

	if (filename == NULL)
		return (0);

	text = malloc(letters);
	if (text == NULL)
		return (0);

	oRet = open(filename, O_RDONLY); /* first open the file */

	rRet = read(oRet, text, letters); /* then read the content of the file */

	text[letters] = '\0';

	wRet = write(STDOUT_FILENO, text, rRet); /* and finally write it in stdout*/

	if (oRet == -1 || wRet == -1 || rRet == -1)
	{
		free(text); /* free the buffer */
		return (0);
	}
	close(oRet);
	free(text);

	return (wRet);
}
