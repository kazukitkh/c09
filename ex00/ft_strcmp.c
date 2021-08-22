/*#include <stdio.h>
#include <string.h>*/

int	ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
		i++;
	return (s1[i] - s2[i]);
}

/*int	main(void)
{
	char	s1[] = "helloo";
	char	s2[] = "hellooo";
	
	int		a = ft_strcmp(s1, s2);
	int		b = strcmp(s1, s2);
	printf("%d, %d\n", a, b);
	return (0);
}*/