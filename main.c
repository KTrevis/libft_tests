/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ketrevis <ketrevis@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 13:38:30 by ketrevis          #+#    #+#             */
/*   Updated: 2023/10/07 15:50:49 by ketrevis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
}
