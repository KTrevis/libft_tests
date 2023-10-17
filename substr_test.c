#include "libft.h"
#include "libft_test.h"
#include <string.h>

char	*substr(char const *s, unsigned int start, size_t len)
{
	char	*rtn;
	size_t	i;

	if (!s)
		return (NULL);
	if ((size_t)start > ft_strlen(s))
		return (ft_strdup(""));
	rtn = malloc(sizeof(char) * (len + 1));
	i = 0;
	if (!rtn)
		return (0);
	while (i < len)
	{
		rtn[i] = *(s + start + i);
		i++;
	}
	rtn[i] = '\0';
	return (rtn);
}

void	substr_test(void) {
	char *str = "ceci est un test";
	int n = 1;

	printf("\n\n\%ssubstr\n", white());
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			printf("%s%d.", white(), n++);
			char *s1 = ft_substr(str, i, j);
			char *s2 = substr(str, i, j);
			strcmp(s1, s2) ? KO() : OK();
			free(s1);
			free(s2);
		}
	}
}
