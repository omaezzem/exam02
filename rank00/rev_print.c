#include <stdio.h>
#include <unistd.h>

void    rev_print(char *str)
{
    int i = 0;
    while (str[i])
        i++;
    i -= 1;
    while (str[i])
    {
        write (1, &str[i], 1);
        i--;
    }
}

// int main(void)
// {
//     rev_print("Hello world");
//     write (1, "\n", 1);
//     rev_print("tnirp esreveR");
//     write (1, "\n", 1);
//     rev_print("");
//     write (1, "\n", 1);
// }