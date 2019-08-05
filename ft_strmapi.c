/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfelty <jfelty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/01 13:28:33 by jfelty            #+#    #+#             */
/*   Updated: 2019/08/04 12:21:52 by jfelty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*newstr;
	int		i;

	i = 0;
	if (f && (newstr = (char *)malloc((sizeof(char) * ft_strlen(s) + 1))))
	{
		while (s[i])
		{
			newstr[i] = f(i, s[i]);
			i++;
		}
		return (newstr);
	}
	return (NULL);
}
