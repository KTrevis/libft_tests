#include "libft.h"
#include "libft_test.h"

void	strncmp_test(void) {
	char *s1 = "ceci est surement pas un test";
	char *s2 = "ceci est probablement un test";

	printf("%s\n\nstrncmp\n", white());
	for (int i = 0; s1[i]; i++) {
		printf("%s%d.", white(), i + 1);
		ft_strncmp(s1, s2, i) == strncmp(s1, s2, i) ? OK() : KO();
	}
}
