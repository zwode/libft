#include "libft.h"

int	main() {
	int fd = open("tes",O_RDONLY);
	char *line;
	while (get_next_line(fd, &line))
	{
		ft_putstr(line);
		ft_putchar('\n');
	}
	return 0;
}
