#include <stdio.h>
#include <unistd.h>

int main(int ac, char **av)
{
    int i = 0;
    // int rj = 0;
    if (ac == 2)
    {
        int j = 0;
        while (av[i][j])
        {
            if (av[i][j] >= 'a' && av[i][j] <= 'z')
            {
                av[i][j] = av[i][j] - 122 + 'a';
                write (1, &av[i][j], 1); 
            }
            else if (av[i][j] >= 'A' && av[i][j] <= 'Z')
            {
                av[i][j] = av[i][j] - 90 + 'A' ;
                write (1, &av[i][j], 1); 
            }
            else 
                write (1, &av[i][j], 1);
            j++;
        }
        write (1, "\n", 1);
    }
}