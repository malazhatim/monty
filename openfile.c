#include "monty.h"

/**
 * file_on - open the file
 * header_name : string
 */
void file_on(char *header_name)
{
	int ch_file;
	FILE *fp;

	if (header_name == NULL)
		mon_errors(2, header_name);
	ch_file = access(header_name, R_OK);
	if (ch_file == -1)
		mon_errors(2, header_name);
	fp = fopen(header_name, "r");
	if (fp == NULL)
		mon_errors(2, header_name);
	r_file(fp);
	fclose(fp);
}
