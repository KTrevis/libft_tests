#include "libft.h"
#include "libft_test.h"

void memcpy_test(void) {
	char *src = "ceci est un test";
	char dest1[100];
	char dest2[100];

	printf("%smemcpy\n", white());
	memcpy(dest1, src, ft_strlen(src) + 1);
	ft_memcpy(dest2, src, ft_strlen(src) + 1);

	printf("1.");
	strcmp(dest1, dest2) ? KO() : OK();
	printf("\n\n");
}
