/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfelty <jfelty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/01 16:58:17 by jfelty            #+#    #+#             */
/*   Updated: 2019/08/04 12:22:29 by jfelty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*endstr;
	int		len;
	int		i;
	int		b;

	b = 0;
	i = 0;
	len = ft_strlen(s) - 1;
	while (ft_isspace(s[len]))
		len--;
	while (ft_isspace(s[i]))
		i++;
	endstr = (char *)malloc(sizeof(char) * (len - i) + 1);
	while (i <= len)
		endstr[b++] = s[i++];
	endstr[b] = '\0';
	return (endstr);
}
