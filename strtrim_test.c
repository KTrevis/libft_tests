#include "libft.h"
#include "libft_test.h"
#include <stdio.h>
#include <string.h>

static int		is_in_set(char c, const char *set)
{
	while (*set)
		if (c == *set++)
			return (0);
	return (1);
}

static char			*strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*rtn;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	start = 0;
	end = ft_strlen(s1);
	while (is_in_set(s1[start], set) == 0)
		start++;
	if (start == ft_strlen(s1))
	{
		if (!(rtn = ft_strdup("")))
			return (NULL);
		else
			return (rtn);
	}
	while (is_in_set(s1[end - 1], set) == 0)
		end--;
	rtn = ft_substr(s1, start, end - start);
	return (rtn);
}

void	strtrim_test(void) {
	printf("%s\n\nstrtrim\n", white());

	char *str = "ceci est un testececcc";
	char *set = "ce";
	int n = 1;

	for (int i = strlen(str); i >= 0; i--) {
		printf("%s%d.", white(), n++);
		char *res = ft_strtrim(str, set);
		char *res2 = strtrim(str, set);
		strcmp(res, res2) ? KO() : OK();
		free(res);
		free(res2);
	}
}
