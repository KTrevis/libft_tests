#include "libft.h"
#include "libft_test.h"

#include <stdio.h>
#include <ctype.h>

void	isalpha_test(void) {
	char *str = "ceci est un test\n\t0123&!@%QEWHJASHDS";

	printf("%sisalpha\n", white());
	for (int i = 0; str[i]; i++)
	{
		int libftRes = ft_isalpha(str[i]);
		int libcRes = isalpha(str[i]);
		
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
