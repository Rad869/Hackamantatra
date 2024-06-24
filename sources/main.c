/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhamed <bhamed@student.42antananarivo      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 12:24:15 by bhamed            #+#    #+#             */
/*   Updated: 2024/06/24 15:06:28 by bhamed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ankamantatra.h"

int	main(int ac, char *av[])
{
	t_game	game;

	if (ac != 3)
	{
		printf("Error: number of parameter");
		return (1);
	}
	play(&game, av);
	return (0);
}
