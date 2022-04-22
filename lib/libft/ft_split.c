/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldournoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 23:16:40 by ldournoi          #+#    #+#             */
/*   Updated: 2022/04/06 13:06:01 by ldournoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_split_free(char **tab, int i)
{
	while (i >= 0)
	{
		free(tab[i]);
		i--;
	}
	free(tab);
	return (NULL);
}

static int	ft_count_words(char const *s, char c, int size, int word)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	if (word)
	{
		while (s[i])
		{
			if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
				count++;
			i++;
		}
		return (count);
	}
	while (s[i] && i < size)
	{
		if (s[i] != c)
			count++;
		i++;
	}
	return (count);
}

static int	ft_is_only_c(char const *s, char c, int *i, int *j)
{
	*i = 0;
	*j = 0;
	while (*s)
	{
		if (*s != c)
			return (0);
		s++;
	}
	return (1);
}

static char	*ft_dup_word(char const *s, int size, char c)
{
	char	*word;
	int		i;
	int		j;

	i = 0;
	j = 0;
	word = ft_calloc(ft_count_words(s, c, size, 0) + 1, sizeof(char));
	if (!word)
		return (NULL);
	while (j < size)
	{
		if (s[j] == c)
		{
			j++;
			continue ;
		}
		word[i] = s[j];
		i++;
		j++;
	}
	word[i] = 0;
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**final;
	int		i;
	int		j;

	final = (char **)ft_calloc(ft_count_words(s, c, 0, 1) + 1, sizeof(char *));
	if (ft_is_only_c(s, c, &i, &j))
		return (final);
	while (s[i++])
	{
		if (!(s[i] == c) && !(s[i] == 0))
			continue ;
		final[j] = ft_dup_word(s, i, c);
		if (!final[j])
			return (ft_split_free(final, j));
		while (s[i] == c && s[i] != 0)
			i++;
		s = s + i;
		if (final[j][0])
			j++;
		else
			free(final[j]);
		i = 0;
	}
	final[j] = NULL;
	return (final);
}
