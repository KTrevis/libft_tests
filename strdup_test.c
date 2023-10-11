#include "libft.h"
#include "libft_test.h"

void	strdup_test(void) {
	printf("%s\n\nstrdup\n", white());

	printf("%s%d.", white(), 1);
	char *str = "ceci est un test";
	char *ptr = ft_strdup(str);
	strcmp(ptr, str) ? KO() : OK();
	free(ptr);
	printf("%s%d.", white(), 2);
	str = "";
	ptr = ft_strdup("");
	strcmp(ptr, str) ? KO() : OK();
	free(ptr);
}
