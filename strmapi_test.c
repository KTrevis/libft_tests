#include "libft.h"
#include "libft_test.h"

static char f(unsigned int n, char c) {
	(void)n;
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

void	strmapi_test(void) {
	printf("%s\n\nstrmapi\n", white());

	printf("%s1.", white());
	char *str = "cEci 1 est % Un teSt";
	char *res = ft_strmapi(str, f);
	strcmp("CECI 1 EST % UN TEST", res) ? KO() : OK();
	free(res);
}
