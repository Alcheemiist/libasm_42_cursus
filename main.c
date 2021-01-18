#include "libasm.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    if (argc >= 2)
    {
        //1 /*ft_strlen*/
        // printf("ft_strlen(argv[1]) = %zu\n",ft_strlen(argv[1]));

        //2 /*strcpy*/
        // char s[100];
        // printf("ft_strcpy(s , d) = |%s|\n", ft_strcpy(s,argv[1]));

        //3 /* strcmp */
        // printf("ft_strcmp(argv[1], 'NO') = |%d|\n" ,ft_strcmp(argv[1],argv[2]));
        // printf("   strcmp(argv[1], 'NO') = |%d|\n" ,  strcmp(argv[1],argv[2]));


       //4 /* ft-strdup*/
        char *s, *r;
        printf("ft_strdup(argv[1]) = |%s|\n",  (r = ft_strdup(argv[1])));
        printf("   strdup(argv[1]) = |%s|\n",  (s = strdup(argv[1])));
        free(s);
        free(r);
    }
    else
    {
        printf("no input\n");
    }
    
    return 0;

}