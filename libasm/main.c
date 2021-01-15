#include "libasm.h"
#include <stdio.h>
#include <string.h>
 
int main(int argc, char **argv)
{
    if (argc >= 2)
    {
        /*ft_strlen*/
        //printf("ft_strlen(argv[1]) = %zu\n",ft_strlen(argv[1]));
        
        /*strcpy*/
        char s[100];
        printf("ft_strcpy(s , d) = |%s|\n", ft_strcpy(s,argv[1]));



    }
    else
    {
        printf("no input\n");
    }
    
    return 0;

}