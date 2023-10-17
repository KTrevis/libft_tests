#include "libft.h"
#include "libft_test.h"
#include <ctype.h>

void	toupper_test(void) {
	printf("%s\n\ntoupper\n", white());

	for (int i = -300; i <= 300; i++)
	{
		printf("%s%d.", white(), i + 301);
		toupper(i) == ft_toupper(i) ? OK() : KO();
	}
}
