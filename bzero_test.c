#include "libft.h"
#include "libft_test.h"

#include <string.h>

void	bzero_test(void) {
	char s1[100] = "ceci est une string";
	char s2[100] = "ceci est une string";
	int i = 1;

	printf("%sbzero\n", white());
	for (int offset = strlen(s1) - 1; offset >= 0; offset--)
	{
		printf("%s%d.", white(), i++);
		ft_bzero(s1 + offset, strlen(s1) - offset);
		bzero(s2 + offset, strlen(s2) - offset);
		strcmp(s1, s2) ? KO() : OK();
	}
	printf("\n\n");
}
