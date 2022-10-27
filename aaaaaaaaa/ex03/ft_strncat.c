/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fborroto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 16:33:33 by fborroto          #+#    #+#             */
/*   Updated: 2022/10/27 15:48:29 by fborroto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	i2;

	i = 0;
	i2 = 0;
	while (dest[i])
		i ++;
	while (src[i2] && i2 < nb)
	{
		dest[i] = src[i2];
		i2 ++;
		i ++;
	}
	while (i2 < nb)
	{
		dest[i2] = 0;
		i2 ++;
	}
	return (dest);
}
