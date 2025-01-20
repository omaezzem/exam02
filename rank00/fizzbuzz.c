#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c) {
	write(1, &c, 1);
}

void	ft_putnbr(int nb) {

	if (nb >= 10) {
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	if (nb < 10) 
        ft_putchar(nb + 48);
}
int main()
{
    int i;
    int mia = 100;
    i = 1;
    while (mia >= i)
    {
        if (i % 3 == 0 && i % 5 == 0)
            write(1, "fizzbuzz\n", 9);
        else if (i % 3 == 0)
            write(1, "fizz\n", 5);
        else if (i % 5 == 0)
            write (1, "buzz\n", 5);
        else 
        {
            ft_putnbr(i);
            write (1, "\n", 1);
        }
        i++;
    }
}