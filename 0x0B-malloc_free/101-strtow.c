#include "main.h"

/**
 * count_words - count the num of words.
 * @str: Arg 1.
 * Return: Returns the num of words.
 */
int	count_words(char *str)
{
	int	w;
	int	i;
	int	count;

	w = 1;
	i = 0;
	count = 0;
	while (str[i])
	{
		if (w && str[i] != ' ')
		{
			w = 0;
			count++;
		}
		if (str[i] == ' ')
			w = 1;
		i++;
	}
	return (count);
}

/**
 * copy - Dup and copy the word.
 * @str: Arg 1.
 * @index: arg 2.
 * Return: Returns a pointer to the array.
 */
char	*copy(char	*str, int *index)
{
	int		len;
	int		start;
	int		i;
	char	*s;

	len = 0;
	i = 0;
	while (str[*index] && str[*index] == ' ')
		*index = *index + 1;
	start = *index;
	while (str[*index] && str[*index] != ' ')
	{
		len++;
		*index = *index + 1;
	}
	s = malloc(len + 1);
	if (!s)
		return (NULL);
	while (i < len)
		s[i++] = str[start++];
	s[i] = '\0';
	return (s);
}

/**
 * strtow - function that splits a string into words.
 * @str: Arg 1.
 * Return: Returns a pointer to the array.
 */
char	**strtow(char *str)
{
	int		words;
	char	**s;
	int		index;
	int		i;

	if (!str)
		return (NULL);
	words = count_words(str);
	if (!words)
		return (NULL);
	index = 0;
	i = 0;
	s = malloc(sizeof(char *) * (words + 1));
	while (i < words)
	{
		s[i] = copy(str, &index);
		if (!s[i])
		{
			words = 0;
			while (words < i)
				free(s[words++]);
			free(s);
			return (NULL);
		}
		i++;
	}
	s[i] = NULL;
	return (s);
}
