#include "libft.h"
#include "libft_test.h"

void	strnstr_test(void) {
	char *str = "ceci est un test";
	char *to_find = "test";
	
	printf("%s\n\nstrnstr\n", white());
	for (int i = 0; (size_t)i < strlen(str); i++)
	{
		printf("%s%d.", white(), i + 1);
		ft_strnstr(str, to_find, i) == strnstr(str, to_find, i) ? OK() : KO();
	}
	to_find = "";
	for (int i = 0; (size_t)i < strlen(str); i++)
	{
		printf("%s%ld.", white(), i + 1 + strlen(str));
		ft_strnstr(str, to_find, i) == strnstr(str, to_find, i) ? OK() : KO();
	}
}
