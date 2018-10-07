/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strncpy.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: cgarrot <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/06 07:57:33 by cgarrot      #+#   ##    ##    #+#       */
/*   Updated: 2018/10/07 08:53:31 by cgarrot     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	char *d;

	d = dst;
	while (n > 0 && *src != '\0')
	{
		*d++ = *src++;
		--n;
	}
	while (n > 0)
	{
		*d++ = '\0';
		--n;
	}
	return (dst);
}
