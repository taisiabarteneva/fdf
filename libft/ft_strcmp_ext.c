/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp_ext.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wurrigon <wurrigon@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 23:34:43 by wurrigon         #+#    #+#             */
/*   Updated: 2022/01/19 23:34:44 by wurrigon        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp_ext(char *filename, char *ext)
{
	size_t	len;
	int		res;
	char	*tmp;

	len = ft_strlen(ext);
	tmp = ft_substr((const char *)filename, ft_strlen(filename) - len, len);
	res = ft_strncmp((const char *)tmp, (const char *)ext, len);
	free(tmp);
	tmp = NULL;
	if (res != 0)
		return (1);
	return (0);
}
