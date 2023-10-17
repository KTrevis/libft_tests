#include "libft.h"
#include "libft_test.h"
#include <string.h>

char		*strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	size_t	stot_len;
	char	*rtn;

	if (!s1 && !s2)
		return (strdup(""));
	if (s1 && !s2)
		return (strdup(s1));
	if (!s1 && s2)
		return (strdup(s2));
	s1_len = strlen((char *)s1);
	s2_len = strlen(s2);
	stot_len = s1_len + s2_len + 1;
	rtn = malloc(sizeof(char) * stot_len);
	if (!rtn)
		return (0);
	memmove(rtn, s1, s1_len);
	memmove(rtn + s1_len, s2, s2_len);
	rtn[stot_len - 1] = '\0';
	return (rtn);
}

void	strjoin_test(void) {
	char *s1 = "ceci est un test ";
	char *s2 = "c'est pas un test";
	int n = 1;

	printf("\n\n%sstrjoin\n", white());
	for (int i = strlen(s1); i >= 0; i--) {
		for (int j = strlen(s2); j >= 0; j--) {
			printf("%s%d.", white(), n++);
			char *new_s1 = strjoin(&s1[i], &s2[j]);
			char *new_s2 = ft_strjoin(&s1[i], &s2[j]);
			strcmp(new_s1, new_s2) ? KO() : OK();
			free(new_s1);
			free(new_s2);
		}
	}
}
