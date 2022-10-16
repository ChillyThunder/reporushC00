/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acliuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 14:57:58 by acliuc            #+#    #+#             */
/*   Updated: 2022/10/16 14:59:06 by acliuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

void	draw_line(int n, char f, char g, char h)
{
	int j;

	j = 0;
	while (j < n)
	{
		if (j == 0)
			ft_putchar(f);
		else
		{
			if (j == n - 1)
				ft_putchar(h);
			else
				ft_putchar(g);
		}
		j++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int i;

	i = 0;
	if (x <= 0 || y <= 0)
		return ;
	while (i < y)
	{
		if (i == 0)
			draw_line(x, '/', '*', '\\');
		else
		{
			if (i == y - 1)
				draw_line(x, '\\', '*', '/');
			else
				draw_line(x, '*', ' ', '*');
		}
		i++;
	}
}
