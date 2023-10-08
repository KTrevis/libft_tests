#include "libft.h"
#include "libft_test.h"

void	tolower_test(void) {
	printf("%s\n\ntolower\n", white());

	for (int i = -300; i <= 300; i++)
	{
		printf("%s%d.", white(), i + 301);
		tolower(i) == ft_tolower(i) ? OK() : KO();
	}
}
