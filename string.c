#include "shell.h"

/**
 * _strlen - display the length of a sting
 * @s: shows the string whose length is to be check
 *
 * Return
 */
int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);

	while (*s++)
		i++;
	return (i);
}

/**
 * _strcmp - performs lexicographic comparison of two strings
 * @s1: a list of string
 * @s2: a second list of string
 *
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	if (*s1 == *s2)
		return (0);

	else
		return (*s1 < *s2 ? -1 : 1);
}

/**
 * starts_with - determine if the needle begins with haystack
 * @haystack:is the string to be search
 * @needle: is the substring to will be found
 *
 */
char *starts_with(const char *haystack, const char *needle)
{
	while (*needle)
		if (*needle++ != *haystack++)
			return (NULL);
	return ((char *)haystack);
}

/**
 * _strcat - is a function that concatenates two strings
 * @dest: is a buffer
 * @src: is the source of dest buffer
 *
 */
char *_strcat(char *dest, char *src)
{
	char *ret = dest;

	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = *src;
	return (ret);
}
