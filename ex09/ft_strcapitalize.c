/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbernard <hbernard@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 05:20:53 by hbernard          #+#    #+#             */
/*   Updated: 2022/02/17 18:51:22 by hbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] > 'a' && str[i] < 'z')
			if (str[i - 1] < 'A' || str[i - 1] > 'z' )
				str[i] = str[i] - 32;
		else if (str[i - 1] < 'a' && str[i - 1] > 'Z' )
					str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
