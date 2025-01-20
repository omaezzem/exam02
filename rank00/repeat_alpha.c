#include <stdio.h>
#include <unistd.h>

int main(int ac, char **av)
{
    int i;
    i = 1;
    int sub;
    if (ac == 2)
    {
        int j = 0;
        while (av[i][j])
        {
            if (av[i][j] >= 'A' && av[i][j] <= 'Z')
            {
                sub = av[i][j] - 'A' + 1;
                while (sub > 0)
                {
                    write (1, &av[i][j], 1);
                    sub--;
                }
            }
            else if (av[i][j] >= 'a' && av[i][j] <= 'z')
            {
                sub = av[i][j] - 'a' + 1;
                while (sub > 0)
                {
                    write (1, &av[i][j], 1);
                    sub--;
                }
            }
            else 
                write (1, &av[i][j], 1);
            j++;
        }
        write (1, "\n", 1);
    }
}