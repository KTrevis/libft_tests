#include "libft.h"
#include "libft_test.h"

void	memmove_test(void) {
	char src[10] = "abcde";
	char *dest = src + 2;

	ft_memmove(dest, src, 3);
	printf("%smemmove\n1.", white());
	strcmp(dest, "abc") ? KO() : OK();
	char dest2[10] = "12345";
	ft_memmove(dest2, src, 6);
	printf("%s2.", white());
	strcmp(dest2, "ababc") ? KO() : OK();
	printf("\n\n");
}
