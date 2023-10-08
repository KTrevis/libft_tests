#include "libft.h"
#include "libft_test.h"

void memcpy_test(void) {
	char src[100] = "ceci est un test";
	char dest[100];
	int		j = 0;

	printf("%smemcpy\n", white());
	for (int i = strlen(src); i >= 0; i--)
	{
		printf("%s%d.", white(), ++j);
		ft_memcpy(dest, src, i);
		strcmp(src, dest) ? KO() : OK();
		bzero(src + i, strlen(src) - i);
		bzero(dest + i, strlen(dest) - i);
	}
	printf("\n\n");
}
