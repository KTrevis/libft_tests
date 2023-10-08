#include "libft.h"
#include "libft_test.h"

void	strchr_test(void) {
	char *str = "ceci est un test";
	printf("%s\n\nstrchr\n", white());

	for (int i = -300; i <= 300; i++) {
		printf("%s%d.", white(), i + 301);
		ft_strchr(str, i) == strchr(str, i) ? OK() : KO();
	}
}
