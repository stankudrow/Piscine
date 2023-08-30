/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainc09ex02.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stanislav <student.21-school.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 17:22:53 by stanislav         #+#    #+#             */
/*   Updated: 2023/08/19 17:22:53 by stanislav        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_free_words(char **words, size_t nwords);
char	**ft_split(char *str, char *charset);

int	main(int argc, char **argv)
{
	char	*delims;
	char	**words;
	size_t	iword;

	if (argc > 1)
	{
		delims = " ";
		if (argc == 3)
			delims = argv[2];
		words = ft_split(argv[1], delims);
		iword = 0;
		while (words && words[iword])
		{
			printf("word%zu: %s\n", iword + 1, words[iword]);
			iword++;
		}
		ft_free_words(words, iword);
	}
	return (0);
}
