#include "libft.h"
#include "libft_test.h"
#include <string.h>

void	strlcat_test(void) {
	char *src = "ceci n'est PAS un test";
	char d1[100] = "";
	char d2[100] = "";
	size_t r1;
	size_t r2;

	printf("%s\n\nstrlcat\n1.", white());
	r1 = ft_strlcat(d1, src, strlen(src));
	r2 = strlcat(d2, src, strlen(src));
	(r1 == r2 && !strcmp(d1, d2)) ? OK() : KO();
	bzero(d1, 100);
	bzero(d2, 100);

	printf("%s2.", white());
	r1 = ft_strlcat(d1, src, 0);
	r2 = strlcat(d2, src, 0);
	(r1 == r2 && !strcmp(d1, d2)) ? OK() : KO();

	for (int i = 0; i <= 29; i++) {
		strcpy(d1, "oskour");
		strcpy(d2, "oskour");
		r1 = ft_strlcat(d1, src, i);
		r2 = ft_strlcat(d2, src, i);
		printf("%s%d.", white(), i + 2);
		(r1 == r2 && !strcmp(d1, d2)) ? OK() : KO();
		bzero(d1, 100);
		bzero(d2, 100);
	}
}
