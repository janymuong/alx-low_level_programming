#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
  * sstrtow - splits a string into words.
  * @str: pointer to base string
  *
  * Return: pointer to concat words
  */
char **strtow(char *str)
{
	char **words;
	int word_length, word_count = 0, in_word = 0, curr_word = 0, start_index = 0, end_index, i, j;

	if (str == NULL || str[0] == '\0')
	{
		return (NULL);
	}

	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ' && !in_word)
		{
			in_word = 1;
			word_count++;
		}
		else if (str[i] == ' ')
		{
			in_word = 0;
		}
	}
	if (word_count == 0)
	{
		return (NULL);
	}

	words = (char **)malloc((word_count + 1) * sizeof(char *));
	if (words == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i]; i++)
	{
		if (str[i] == ' ')
		{
			if (i > start_index)
			{
				end_index = i - 1;
				word_length = end_index - start_index + 1;
				words[curr_word] = (char *)malloc((word_length + 1) * sizeof(char));
				if (words[curr_word] == NULL)
				{
					for (j = 0; j < curr_word; j++)
					{
						free(words[j]);
					}
					free(words);
					return (NULL);
				}
				strncpy(words[curr_word], &str[start_index], word_length);
				words[curr_word][word_length] = '\0';
				curr_word++;
			}
			start_index = i + 1;
		}
	}
	end_index = strlen(str) - 1;
	if (end_index >= start_index)
	{
		word_length = end_index - start_index + 1;
		words[curr_word] = (char *)malloc((word_length + 1) * sizeof(char));
		if (words[curr_word] == NULL)
		{
			for (j = 0; j < curr_word; j++)
			{
				free(words[j]);
			}
			free(words);
			return (NULL);
		}
		strncpy(words[curr_word], &str[start_index], word_length);
		words[curr_word][word_length] = '\0';
		curr_word++;
	}
	words[curr_word] = NULL;
	return (words);
}
