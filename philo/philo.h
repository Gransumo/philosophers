#ifndef PHILO_H
#define PHILO_H
# include <pthread.h>
# include <stdio.h>
# include <unistd.h>
# include <time.h>
# include <stdlib.h>


typedef struct s_philosopher
{
	pthread_t		*thread;
	pthread_mutex_t	*fork;
	pthread_mutex_t	*fork_left;
	int				id;
	int				time_to_die;
	int				time_to_eat;
	int				time_to_sleep;
	int				n_eaten_times;
}			t_philosopher;

typedef struct s_table
{
	t_philosopher	**philos;

}	t_table;

/* UTILS */
int		ft_atoi(const char *str);

#endif