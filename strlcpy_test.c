#include "libft.h"
#include "libft_test.h"

void	strlcpy_test(void) {
	char *src = "ceci est un test";
	char dest1[100];
	char dest2[100];

	printf("%sstrlcpy\n", white());
	for (int i = 0; src[i]; i++)
	{
		printf("%s%d.", white(), i + 1);
		bzero(dest1, strlen(src));
		bzero(dest2, strlen(src));
		ft_strlcpy(dest1, src, i);
		strlcpy(dest2, src, i);
		strcmp(dest1, dest2) ? KO() : OK();
	}
}
