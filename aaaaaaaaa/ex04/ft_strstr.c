/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fborroto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 16:48:41 by fborroto          #+#    #+#             */
/*   Updated: 2022/10/27 14:29:43 by fborroto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *str, char *str2, unsigned int n);

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	i2;
	char			*c;

	i = 0;
	i2 = 0;
	if (to_find[i] == 0)
		return (str);
	while (to_find[i2])
		i2 ++;
	while (str[i])
	{
		c = &str[i];
		if (str[i] == to_find[0])
			if (ft_strncmp (c, to_find, i2) == 0)
				return (c);
		i ++;
	}
	return (0);
}

int	ft_strncmp(char *s1, char*s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] && s1[i] == s2[i] && i < n - 1)
		i ++;
	return (s1[i] - s2[i]);
}
