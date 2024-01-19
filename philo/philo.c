
#include "philo.h"

t_philosopher	*init_philos(int n_philos)
{
	int				i;
	t_philosopher	philos[n_philos];

	i = 0;
	while (i <= n_philos)
	{
		philos[i] = malloc (sizeof(t_philosopher));
		i++;
	}
	
}

int	main(int argc, char **argv)
{
	t_table table;

	table.philos = init_philos (ft_atoi (argv[1]));
}
