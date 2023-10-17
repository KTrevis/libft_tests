#include "libft_test.h"
#include "libft.h"
#include <stdio.h>
#include <string.h>

static int	nbr_len(int n)
{
	int		size;
	long	nb;

	size = 1;
	nb = (long)n;
	if (n < 0)
	{
		nb = -nb;
		size++;
	}
	while (nb >= 10)
	{
		size++;
		nb /= 10;
	}
	return (size);
}

char	*itoa(int n)
{
	char	*str;
	int		i;
	long	nb;

	i = nbr_len(n);
	str = malloc((i + 1) * sizeof(char));
	nb = (long)n;
	if (!str)
		return (NULL);
	str[i--] = '\0';
	if (n == 0)
		str[i] = '0';
	if (n < 0)
	{
		nb = -nb;
		str[0] = '-';
	}
	while (i >= 0 && nb > 0)
	{
		str[i] = nb % 10 + 48;
		nb /= 10;
		i--;
	}
	return (str);
}

void	itoa_test(void) {
	printf("%s\n\nitoa\n", white());
	int n = 1;

	int i = 0x80000000;
	char *s1 = ft_itoa(i);
	char *s2 = itoa(i);
	printf("%s%d.", white(), n++);
	strcmp(s1, s2) ? KO() : OK();
	free(s1);
	free(s2);

	i = 0x7fffffff;
	s1 = ft_itoa(i);
	s2 = itoa(i);
	printf("%s%d.", white(), n++);
	strcmp(s1, s2) ? KO() : OK();
	free(s1);
	free(s2);

	for (i = -123; i < 567; i += 123) {
		printf("%s%d.", white(), n++);
		s1 = ft_itoa(i);
		s2 = itoa(i);
		strcmp(s1, s2) ? KO() : OK();
		free(s1);
		free(s2);
	}
}
