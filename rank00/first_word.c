#include <stdio.h>
#include <unistd.h>

int main(int ac, char **av)
{
	int i;
	int j;
	i = 1;
	if (ac == 2)
	{
		j = 0;
		while (av[i][j] && (av[i][j] == ' ' || av[i][j] == '\t'))
		{
			if (av[i][j] != ' ' && av[i][j] != '\t')
				break;
			j++;
		}
		while (av[i][j] && av[i][j] != '\t' && av[i][j] != ' ')
		{
			write(1, &av[i][j], 1);
			j++;
		}
		write (1, "\n", 1);
	}
	else 
		write (1, "\n", 1);
}