/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maximegdfr <maximegdfr@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 12:30:15 by mgodefro          #+#    #+#             */
/*   Updated: 2024/12/26 14:10:16 by maximegdfr       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 🇬🇧	  Concatenates two strings into a newly allocated string.*/

/* 🇫🇷   Concatène deux chaînes de caractères dans une nouvelle chaîne allouée.*/

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	char	*result;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	result = (char *)malloc((s1_len + s2_len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	ft_strlcpy(result, s1, s1_len + 1);
	ft_strlcpy((result + s1_len), s2, s2_len + 1);
	return (result);
}

/*int main()
{
    const char *s1 = "Hello ";
    const char *s2 = "world !";

    char *result = ft_strjoin(s1, s2);
    if (result != NULL)
    {
        printf("Result : %s\n", result);
        free(result);
    }

    return (0);
}*/