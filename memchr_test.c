#include "libft.h"
#include "libft_test.h"

void	memchr_test(void) {
	char *str = "ceci est un test";
	
	printf("%s\n\nmemchr\n", white());
	for (int i = -300; i != 300; i++)
	{
		printf("%s%d.", white(), i + 301);
		ft_memchr(str, i, ft_strlen(str)) == memchr(str, i, ft_strlen(str)) ? OK() : KO();
	}
}
