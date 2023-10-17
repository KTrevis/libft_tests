#include "libft.h"
#include "libft_test.h"
#include <stdio.h>
#include <string.h>

static void f(unsigned int n, char *c) {
	(void)n;
	if (*c >= 'a' && *c <= 'z')
		*c -= 32;
}

void	striteri_test(void) {
	printf("%s\n\nstriteri\n1.", white());
	char str[100] = "cEci 1 eSt % un test";
	ft_striteri(str, f);
	strcmp("CECI 1 EST % UN TEST", str) ? KO() : OK();
}
