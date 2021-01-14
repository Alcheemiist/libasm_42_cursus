#include "libasm.h"
#include <stdio.h>

int main(int argc, char **argv)
{
    if (argc >= 2)
    {
        //printf("ft_strlen(argv[1]) = %zu\n",ft_strlen(argv[1]));
        char *s;
        printf("ft_strcpy(s , d) = |%s|\n", ft_strcpy(s,argv[1]));

    }
    else
    {
        printf("no input\n");
    }
    
    return 0;

}