#include "libft.h"
#include "libft_test.h"

void	isascii_test(void) {
	printf("%sft_isascii\n", white());

	char *str = "ceci est un test\n\t0123&!@%QEWHJASHDS";
	for (int i = 0; str[i]; i++)
	{
		int libftRes = ft_isascii(str[i]);
		int libcRes = isascii(str[i]);
		
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
