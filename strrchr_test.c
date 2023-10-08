#include "libft.h"
#include "libft_test.h"

void	strrchr_test(void) {
	char *str = "ceci est un test";
	printf("%s\n\nstrrchr\n", white());

	for (int i = -300; i <= 300; i++) {
		printf("%s%d.", white(), i + 301);
		ft_strrchr(str, i) == strrchr(str, i) ? OK() : KO();
	}
}
