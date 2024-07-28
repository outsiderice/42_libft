/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagnell <amagnell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 07:26:41 by amagnell          #+#    #+#             */
/*   Updated: 2024/07/28 08:11:22 by amagnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_RESET   "\x1b[0m"

void	test_isalpha()
{
	printf("ft_isalpha:");
	if (ft_isalpha('a') == 0 || ft_isalpha('z') == 0)
		printf(" KO");
	else
		printf(" OK");
	if (ft_isalpha('`') == 1 || ft_isalpha('{') == 1)
		printf(" KO");
	else
		printf(" OK");
	if (ft_isalpha('A') == 0 || ft_isalpha('Z') == 0)
		printf(" KO\n");
	else
		printf(" OK\n");
	if (ft_isalpha(64) == 1 || ft_isalnum(91) == 1)
		printf(" KO\n");
	else
		printf(" OK\n");
}


int	main()
{
	test_isalpha();
	printf("ft_isdigit:");
	if (ft_isdigit(0) == 0 || ft_isdigit(9) == 0 || ft_isdigit('a') == 1)
		return (printf(" KO\n"));
	printf(" OK\n");
	printf("ft_isalnum:");
	if (ft_isalnum(0) == 0 || ft_isalnum(9) == 0 || ft_isalnum('a') == 0 || ft_isalnum('Z'))
	printf(" OK\n");
	printf("ft_isascii:");
	printf(" OK\n");
	printf("ft_isprint:");
	return (0);
}
