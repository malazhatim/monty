#include "monty.h"

/**
 * file_on - open the file
 * @header_name : string
 */
void file_on(char *header_name)
{
	FILE *fp = fopen(header_name, "r");

	if (header_name == NULL || fp == NULL)
		mon_errors(2, header_name);
	read_file(fp);
	fclose(fp);

}
/**
 * read_file - read file
 * @fp: pointer
 */
void read_file(FILE *fp)
{
	int line;
	int f = 0;
	char *buffer = NULL;
	size_t n = 0;

	if (fp == NULL)
		mon_errors(2, "header_name");
	for (line = 1; getline(&buffer, &n, fp) != -1; line++)
	{
		f = func_put(buffer, line, f);
	}
	free(buffer);
}
