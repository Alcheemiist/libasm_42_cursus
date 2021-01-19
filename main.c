#include "libasm.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include  <fcntl.h>

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
        // char *s, *r;
        // printf("ft_strdup(argv[1]) = |%s|\n",  (r = ft_strdup(argv[1])));
        // printf("   strdup(argv[1]) = |%s|\n",  (s = strdup(argv[1])));
        // free(s);
        // free(r);
    

//5 ft_read
        // char buff[11];
        // int fd = open(argv[1], O_RDONLY) ;

        // int d = ft_read(fd, buff, 10);
        // buff[d] = '\0';
        // printf("fd = %d | (%d) = ft_read(fd, buff, 10)\n|%s|\n",fd , d, buff);

        // fd = open(argv[1], O_RDONLY) ;
        // char yy[11];
        // d = read(fd, yy, 10);
        // yy[d] = '\0';
        // printf("fd = %d | (%d) =    read(fd, buff, 10)\n|%s|\n",fd , d, yy);

//6 FT_WRITE
        int o = ft_write(1, "Mehdi", 5);
        printf("\nreturn = |%d| ft_write(1, 'Mehdi', 5) = |^|\n", o);

        o = write(1, "Mehdi", 5);
        printf("\nreturn = |%d|    write(1, 'Mehdi', 5) = |^|\n", o);


    }
    else
    {
        printf("no input\n");
    }
    
    return 0;

}