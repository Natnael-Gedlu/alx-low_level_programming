#include "main.h"

/**
* _strcpy - copies the string then pastes
* @dest: paste to
* @src: copy from
*
* Return: Always 0 (Success)
*/

char *_strcpy(char *dest, char *src)
{
	int inc = 0;

	while (*(src + inc) != '\0')
	{
		*(dest + inc) = *(src + inc);
		inc++;
	}
	*(dest + inc) = '\0';


	return (dest);
}
