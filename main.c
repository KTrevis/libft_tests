/* 
	TODO: itoa, strmapi, striteri
*/

#include "libft.h"
#include "libft_test.h"
#include <ctype.h>
#include <stdio.h>

char	*white(void) {
	return ("\033[0;37m");
}

void	KO(void) {
	printf("\033[0;31mKO ");
}

void	OK(void) {
	printf("\033[0;32mOK ");
}

int	main(void) {
	isalpha_test();
	isdigit_test();
	isalnum_test();
	isascii_test();
	isprint_test();
	strlen_test();
	memset_test();
	bzero_test();
	memcpy_test();
	memmove_test();
	strlcpy_test();
	strlcat_test();
	toupper_test();
	tolower_test();
	strchr_test();
	strrchr_test();
	strncmp_test();
	memchr_test();
	memcmp_test();
	strnstr_test();
	atoi_test();
	strdup_test();
	substr_test();
	strjoin_test();
	strtrim_test();
	itoa_test();
	strmapi_test();
	striteri_test();
}
