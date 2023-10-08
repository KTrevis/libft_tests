#include "libft.h"
#include "libft_test.h"

void	isdigit_test(void) {
	char *str = "ceci est un test\n\t0123&!@%QEWHJASHDS";

	printf("%sisdigit\n", white());
	for (int i = 0; str[i]; i++)
	{
		int libftRes = ft_isdigit(str[i]);
		int libcRes = isdigit(str[i]);
		
		printf("%s%d.", white(), i + 1);
		if (libftRes > 0 && libcRes > 0)
			OK();
		else if (libftRes == 0 && libcRes == 0)
			OK();
		else
			KO();
	}
	printf("\n\n");
}
