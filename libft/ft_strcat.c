/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpierre <tpierre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 18:55:00 by tpierre           #+#    #+#             */
/*   Updated: 2020/03/10 18:55:43 by tpierre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	char *s3;

	s3 = s1;
	while (*s3)
		s3++;
	while (*s2)
		*s3++ = *s2++;
	*s3 = '\0';
	return (s1);
}
