#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
  * _puts - prints a string
  * @str: pointer to the string to print
  * Return: void
  */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
}

/**
  * _strlen - find the length of a string
  * @s: pointer to the string to check
  * Return: void
  */

int _strlen(const char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}

/**
  *_strcpy -  copies the string pointed to by src
  * @dest: char type string
  * @src: char type string
  * Description: Copy the string pointed to by pointer `src` to
  * the buffer pointed to by `dest`
  * Return: Pointer to `dest`
  */

char *_strcpy(char *dest, const char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');
	return (dest);
}
