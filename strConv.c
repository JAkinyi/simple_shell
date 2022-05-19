#include "main.h"
/**
  *numb_spaces - return the number of occurent of a string
  * @s: string to check
  * Return: int
  */
unsigned int numb_spaces(char *s)
{
	int i, count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i]  == ' ')
			count++;
	}
	return (count);
}
/**
  * stringToWords - split a sentence into multiple words.
  * @str: the string passed as argument.
  * Return: words
 */
char **stringToWords(char *str)
{
	int i = 0;
	const char separator[] = " ";
	int spaces = numb_spaces(str);
	char **words = malloc(sizeof(char *) * (spaces + 1));
	char *word;

	if (!words)
	{
		fprintf(stderr, "sh: allocation error\n");
		exit(1);
	}
	word = strtok(str, separator);

	while (word != NULL)
	{
		words[i] = word;

		word = strtok(NULL, separator);
		i++;
	}
	words[i] = NULL;

	return (words);
}
