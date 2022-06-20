/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agallipo <agallipo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 18:58:19 by agallipo          #+#    #+#             */
/*   Updated: 2022/06/20 18:47:56 by agallipo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosoper.h"

int main(int argc, char **argv)
{
    t_philo    *philo;

    if (argc != 4 || argc != 5)
        return (1);
    philo = init_philo(argv);
    
}