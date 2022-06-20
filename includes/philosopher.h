/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosopher.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agallipo <agallipo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 18:58:56 by agallipo          #+#    #+#             */
/*   Updated: 2022/06/20 18:51:52 by agallipo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILOSOPHER_H
#define PHILOSOPHER_H
 #include <pthread.h>
 typedef struct s_philo
 {
     int    num_philos
     int    time_sleep
     int    time_eat
     int    time_die
 }              t_philo;

#endif