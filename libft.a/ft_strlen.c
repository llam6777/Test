/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 17:54:15 by lelam             #+#    #+#             */
/*   Updated: 2023/11/14 17:54:15 by lelam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	    i++;
	return (i);
}

int	main(void)
{
	char	*str;
	int		num;

	str = "Hello World!";
	num = ft_strlen(str);
	printf("Number of Characters: %d\n", num);
	return (0);
}