#include "libasm.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include  <fcntl.h>

int	main(int argc, char **argv)
{
	int		o;
	char	*s;
	char	*r;

	if (argc >= 2)
	{
		printf("ft_strlen(argv[1]) = %zu\n",ft_strlen(argv[1]));
		printf("   strlen(argv[1]) = %zu\n\n",strlen(argv[1]));
		
		s = malloc(strlen(argv[1] + 1));
		printf("ft_strcpy(s , d) = |%s|\n", ft_strcpy(s,argv[1]));
		printf("   strcpy(s , d) = |%s|\n\n", strcpy(s,argv[1]));

		if (argv[2])
		{
			printf("ft_strcmp(argv[1], argv[2]) = |%d|\n" ,ft_strcmp(argv[1],argv[2]));
			printf("   strcmp(argv[1], argv[2]) = |%d|\n\n" ,  strcmp(argv[1],argv[2]));
		}

		printf("ft_strdup(argv[1]) = |%s|\n",  (r = ft_strdup(argv[1])));
		printf("   strdup(argv[1]) = |%s|\n\n",  (s =    strdup(argv[1])));
		free(s);
		free(r);
    
		char buff[6];
		int d = ft_read(0, buff, 5);
		buff[d] = '\0';

		char buff2[6];
		d = read(0, buff2, 5);
		buff2[d] = '\0';
		printf("ft_read => return = (%d) || buff = |%s|\n", d, buff);
		printf("   read => return = (%d) || buff = |%s|\n", d, buff2);


// fd = open(argv[1], O_RDONLY) ;
// char yy[11];
// d = read(fd, yy, 10);
// yy[d] = '\0';
// printf("fd = %d | (%d) =    read(fd, buff, 10)\n|%s|\n",fd , d, yy);

//6 FT_WRITE
        o = ft_write(1, "LLL", 3);
        printf("\n|^| return = |%d| ft_write()\n\n", o);
        o = write(1, "LLL" , 3);
        printf("\n|^| return = |%d|    write()\n", o);
        }
    else
        printf("no input\n");
    return (0);
}