/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfelty <jfelty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/01 12:58:07 by jfelty            #+#    #+#             */
/*   Updated: 2019/08/04 12:21:50 by jfelty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*newstr;
	int		i;

	i = 0;
	if (f && (newstr = (char *)malloc((sizeof(char) * ft_strlen(s) + 1))))
	{
		while (s[i])
		{
			newstr[i] = f(s[i]);
			i++;
		}
		return (newstr);
	}
	return (NULL);
}
