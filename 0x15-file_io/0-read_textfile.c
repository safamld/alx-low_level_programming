#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* read_textfile- function that reads a text file to stdout
* @filename: text file
* @letters: number of letter to be  read
* Return: w- actual number of lettters it could be read and print
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
char *buf;
ssize_t fp;
ssize_t w;
ssize_t s;
fp = open(filename, O_RDONLY);
if (fp == -1)
return (0);
buf = malloc(sizeof(char) * letters);
s = read(fp, buf, letters);
w = write(STDOUT_FILENO, buf, s);
free(buf);
close(fp);
return (w);
}
