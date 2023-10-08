#include "libft.h"
#include "libft_test.h"

static int	only_char(char *s, char c) {
	while (*s)
	{
		if (*s != c)
			return (0);
		s++;
	}
		return (1);
}

void	memset_test(void) {
	char str[100] = "ceci est un test";
	char *src = "saddfljha7514167!#@$%!^&{}!><";

	printf("%smemset\n", white());
	for (int i = 0; src[i]; i++)
	{
		printf("%s%d.", white(), i + 1);
		ft_memset(str, src[i], ft_strlen(str));
		only_char(str, src[i]) ? OK() : KO();
	}
	printf("%s30.", white());
	ft_memset(str, 'a', ft_strlen(str) - 5);
	!only_char(str, 'a') ? OK() : KO();
	printf("\n\n");
}
