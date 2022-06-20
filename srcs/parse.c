/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agallipo <agallipo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 18:33:00 by agallipo          #+#    #+#             */
/*   Updated: 2022/06/20 19:36:06 by agallipo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosopher.h"

int check_args(char **argv)
{
    int i;

    i = 1;
    while (argv[i] != 0)
    {
        if (ft_is_str_num(argv[i]) == 0)
            return (0);
        i++;
    }
    return (1);
}
t_philo    *init_philo(char **argv)
{
    t_philo    *philo;
    int    num_philos
    int    time_sleep
    int    time_eat
    int    time_die

    if (check_args(argv) == 0)
        return (0);
    num_philos = ft_atoi(argv[1]);
    time_sleep = ft_atoi(argv[2]);
    time_eat = ft_atoi(argv[3]);
    if (argv[4])
        time_die = ft_atoi(argv[4]);
    philo = malloc(sizeof(t_philo *));
}

void    create_threads(t_philo philo)
{
    int i;
    t_list 

    i = 0;
    

}