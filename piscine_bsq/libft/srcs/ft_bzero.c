/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharchen <tharchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/21 14:32:59 by tharchen          #+#    #+#             */
/*   Updated: 2019/06/26 22:35:15 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		*ft_bzero(void *s, int n)
{
	unsigned char	*us;
	int				i;

	us = (unsigned char *)s;
	i = -1;
	while (++i < n)
		us[i] = 0;
	return (s);
}
