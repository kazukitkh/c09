#include <stdlib.h>
#include <stdio.h>

char	**ft_split(char *str, char *charset)
{
	char	**t;
	int		i;
	int		j;
	int		*a;
	int		k;
	int		s;
	int		d;
	int		test;

	i = -1;
	while (str[++i]);
	d = i;
	a = malloc(sizeof(int) * (d + 1));
	a[d] = -1;
	printf("%d\n", d);
	while (--i >= 0)
		a[i] = 0;
	while (str[++i])
	{
		j = -1;
		while (charset[++j])
			if (str[i] == charset[j])
				a[i] = 1;
	}
//ここまでおけ.
	i = -1;
	k = 0;
	while (str[++i])
	{
		if (!a[i] && a[i + 1] || (!a[d - 1] && i == d - 1))
		{
			a[i] = 3;
			k += 1;
		}
		if (a[i] && !a[i + 1])
			a[i] = 2;
	}
	test = -1;
	while (a[++test] > -1)
		printf("%d", a[test]);
	t = malloc(k + 1);//ここまでおけ.
	t[k] = 0;
	printf("%d", k);//おけ
	i = 0;
	k = 0;
	printf("%s", str);//おけ
	printf("%s", charset);//おけ
	while (i < d)
	{
		j = i;
		if (!j)
		{
			if (!a[0])
			{
				while (a[++j] != 3);
				t[0] = malloc(sizeof(char) * (2 + j - i));
				t[0][j + 1] = 0;
				s = -1;
				while (i++ <= j)
					t[0][++s] = str[i - 1];
				printf("hello");
			}
			if (a[0] == 3)
			{
				t[0] = malloc(sizeof(char) * 2);
				t[0][0] = str[0];
				t[0][1] = 0;
			}
			k++;
		}
		if (a[j] == 2)
		{
			while (a[++j] != 3);
			t[k] = malloc(sizeof(char) * (2 + j - i));
			s = -1;
			while (i++ < j)
				t[k][++s] = str[i];
			t[k][++s] = 0;
			k++;
		}
		i = j + 1;
	}
	return (t);
}

int	main(int argc, char *argv[])
{
	int		i;
	int		j;
	char	**t;

	(void)argc;
	i = -1;
	t = ft_split(*(argv + 2), *(argv + 1));
	printf("\n%s, %s\n", *(argv + 2), *(argv + 1));//おけ
	while (t[++i])
	{
		printf("%s", t[i]);
		putchar('\n');
	}
	return (0);
}