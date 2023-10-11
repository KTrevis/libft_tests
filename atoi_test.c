#include "libft.h"
#include "libft_test.h"

void	atoi_test() {
	char *str = "-123+42+-234bacd++++131--112khahag";
	int j = 1;

	printf("%s\n\natoi\n", white());
	for (int i = strlen(str) - 1; i >= 0; i--)
	{
		printf("%s%d.", white(), j++);
		ft_atoi(&str[i]) == atoi(&str[i]) ? OK() : KO();
	}
}
