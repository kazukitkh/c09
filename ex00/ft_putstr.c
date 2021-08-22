#include <unistd.h>

void	ft_putstr(char *str)
{
	int		j;

	j = 0;
	while (str[j] !='\0')
	{
		j++;
	}
	write(1, str, j);
}
