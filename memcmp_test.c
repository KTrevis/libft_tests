#include "libft.h"
#include "libft_test.h"

void	memcmp_test() {
	char *s1 = "ceci est abc un test";
	char *s2 = "ceci est pas un test";

	printf("%s\n\nmemcmp\n", white());
	for (int i = 0; s1[i]; i++)
	{
		printf("%s%d.", white(), i + 1);
		memcmp(&s1[i], &s2[i], strlen(s1) - i) == ft_memcmp(&s1[i], &s2[i], strlen(s1) - i) ? OK() : KO();
	}
}
