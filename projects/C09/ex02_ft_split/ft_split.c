/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 17:23:03 by stanislav         #+#    #+#             */
/*   Updated: 2023/08/19 17:23:03 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <errno.h>
#include <stdbool.h>
#include <stdlib.h>

bool	ft_contains(char chr, char *charset)
{
	while (*charset)
	{
		if (chr == *charset)
			return (true);
		charset++;
	}
	if (chr == *charset)
		return (true);
	return (false);
}

size_t	ft_count_words(char *str, char *delims)
{
	size_t	words;
	bool	prev_delim;
	bool	curr_delim;

	words = 0;
	prev_delim = true;
	while (*str)
	{
		curr_delim = ft_contains(*str, delims);
		if (!prev_delim && curr_delim)
			words++;
		prev_delim = curr_delim;
		str++;
	}
	if (!prev_delim)
		words++;
	return (words);
}

void	ft_free_words(char **words, size_t nwords)
{
	size_t	iword;

	iword = 0;
	while (iword < nwords)
	{
		free(words[iword]);
		iword++;
	}
	free(words);
}

char	*ft_get_next_word(char **str, char *delims)
{
	char	*string;
	char	*word_start;
	char	*word;
	size_t	iword;

	string = *str;
	while (ft_contains(*string, delims))
		string++;
	word_start = string;
	while (!ft_contains(*string, delims))
		string++;
	word = malloc((string - word_start + 1) * sizeof(char));
	if (!word)
		return (NULL);
	iword = 0;
	while (word_start != string)
		word[iword++] = *word_start++;
	word[iword] = '\0';
	*str = string;
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	size_t	num_of_words;
	char	**words;
	size_t	iword;

	num_of_words = ft_count_words(str, charset);
	if (!num_of_words)
		return (NULL);
	words = malloc((num_of_words + 1) * sizeof(char *));
	if (!words)
		return (NULL);
	iword = 0;
	while (iword < num_of_words)
	{
		words[iword] = ft_get_next_word(&str, charset);
		if (!words[iword])
		{
			ft_free_words(words, iword + 1);
			return (NULL);
		}
		iword++;
	}
	words[iword] = NULL;
	return (words);
}
