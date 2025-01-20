#include <stdio.h>
#include <unistd.h>

int main(int ac, char **av)
{
    int i;
    i = 1;
    int j = 0;
    if (ac == 4)
    {
        while (av[i][j])
        {
            if (av[i][j] == av[2][0])
            {
                write (1, &av[3][0], 1);
            }
            else 
                write (1, &av[i][j], 1);
            j++;
        }
    }
    write(1, "\n", 1);
}