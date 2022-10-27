/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fborroto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 12:29:46 by fborroto          #+#    #+#             */
/*   Updated: 2022/10/27 15:44:37 by fborroto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		strlent(char *str);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	i2;
	unsigned int	sum;

	i2 = 0;
	i = strlent(dest);
	sum = strlent(dest) + strlent(src);
	while (src[i2] && i2 < size - 1 - i)
	{
		dest[i + i2] = src[i2];
		i2 ++;
	}
	dest[i + i2] = 0;
	return (sum);
}

int	strlent(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i ++;
	return (i);
}
