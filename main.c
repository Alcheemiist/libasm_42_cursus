#include "libasm.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include  <fcntl.h>

void	test_read(void)
{
	int		o;
	char	buff[6];
	char	buff2[6];

	o = ft_read(0, buff, 5);
	buff[o] = '\0';
	printf("ft_read => return = (%d) || buff = |%s|\n", o, buff);
	o = read(0, buff, 5);
	buff[o] = '\0';
	printf("   read => return = (%d) || buff = |%s|\n", o, buff);
	o = ft_write(1, "LLL", 3);
	printf(" <return = |%d| ft_write()\n\n", o);
	o = write(1, "LLL", 3);
	printf(" <return = |%d|    write()\n", o);
}

void	test_strdup(char *str)
{
	char	*s;
	char	*r;

	printf("ft_strdup(argv[1]) = |%s|\n", (r = ft_strdup(str)));
	printf("   strdup(argv[1]) = |%s|\n\n", (s = strdup(str)));
	free(s);
	free(r);
}

int	main(int argc, char **argv)
{
	char	*s;
	char	*r;
	int		d;

	if (argc >= 2)
	{
		printf("ft_strlen(argv[1]) = %zu\n", ft_strlen(argv[1]));
		printf("   strlen(argv[1]) = %zu\n\n", strlen(argv[1]));
		s = malloc(strlen(argv[1] + 1));
		printf("ft_strcpy(s , d) = |%s|\n", ft_strcpy(s, argv[1]));
		printf("   strcpy(s , d) = |%s|\n\n", strcpy(s, argv[1]));
		if (argv[2])
		{
			printf("ft_strcmp(argv[1], argv[2]) = |%d|\n", \
			ft_strcmp(argv[1], argv[2]));
			printf("   strcmp(argv[1], argv[2]) = |%d|\n\n", \
			strcmp(argv[1], argv[2]));
		}
		test_strdup(argv[1]);
		test_read();
	}
	else
		printf("no input\n");
	return (0);
}
