/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strjoin.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: cgarrot <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/07 08:48:04 by cgarrot      #+#   ##    ##    #+#       */
/*   Updated: 2018/10/07 09:00:49 by cgarrot     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*tab;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (!(tab = (char*)malloc(sizeof(char)
					* (ft_strlen(s1) + ft_strlen(s2) + 1))))
		return (0);
	while (s1[i])
	{
		tab[j] = s1[i];
		i++;
		j++;
	}
	i = 0;
	while (s2[i])
	{
		tab[j] = s2[i];
		i++;
		j++;
	}
	tab[j] = '\0';
	return (tab);
}
