#include"main.h"
/**
 * _strncpy - copies at most n bytes from src to dest
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to copy
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int i = 0, j = 0;
while (src[i++])
j++;
for (i = 0; src[i] && i < n; i++)
dest[i] = src[i];
for (i = j; i < n; i++)
dest[i] = '\0';
return (dest);
}
