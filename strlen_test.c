#include "libft.h"
#include "libft_test.h"

void	strlen_test() {
	char str[100] = "ceci est un test";
	int j = 1;

	printf("%sstrlen\n", white());
	for (int i = strlen(str) - 1; i >= 0; i--)
	{
		printf("%s%d.", white(), j++);
		ft_strlen(str) == strlen(str) ? OK() : KO();
		str[i] = '\0';
	}
	printf("\n\n");
}
