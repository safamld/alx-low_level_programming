#include "main.h"
/**
* create_file - function that creates a file
* @filename: the name of the file
* @text_content: string to write to the file
* Return: success or fail
*/
int create_file(const char *filename, char *text_content)
{
FILE *fp = fopen(file_name, "w");
if (fp == NULL) {
fprintf(stderr, "Error: cannot create file %s\n", file_name);
exit(1);
}
fprintf(fp, "%s", content);
fclose(fp);
}
