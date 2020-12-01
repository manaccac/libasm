/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manaccac <manaccac@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 11:17:07 by manaccac          #+#    #+#             */
/*   Updated: 2020/12/01 07:45:25 by manaccac         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libasm.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

int		main(void)
{
	long int	r;
	char	buffer[100];
	int		i;
	int		fd;
	char	*test;
	int		res;
	int		res1;

	r = 0;
	i = 0;
	res = 0;
	res1 = 0;
	fd = open("includes/test_read.txt", O_RDONLY);
	while (i < 100)
		buffer[i++] = 0;

	printf("\033[1;34m");
	printf("%20%--strlen--%%\n");
	printf("\033[0m");

	res = ft_strlen("Salut");
	res1 = strlen("Salut");
	printf("[Salut] = ");
	if (res == res1)
	{
		printf("\033[0;32m");
		printf("[OK]\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[0;31m");
		printf("[KO]\n");
		printf("\033[0m");
	}

	res = ft_strlen("");
	res1 = strlen("");
	printf("[] = ");
	if (res == res1)
	{
		printf("\033[0;32m");
		printf("[OK]\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[0;31m");
		printf("[KO]\n");
		printf("\033[0m");
	}
	res = ft_strlen("ieukthfiSUODLghISOLgdhkjvmsOLdg");
	res1 = strlen("ieukthfiSUODLghISOLgdhkjvmsOLdg");
	printf("[ieukthfiSUODLghISOLgdhkjvmsOLdg] = ");
	if (res == res1)
	{
		printf("\033[0;32m");
		printf("[OK]\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[0;31m");
		printf("[KO]\n");
		printf("\033[0m");
	}

	res = ft_strlen("Salut bro tu vas bien ?");
	res1 = strlen("Salut bro tu vas bien ?");
	printf("[Salut bro tu vas bien ?] = ");
	if (res == res1)
	{
		printf("\033[0;32m");
		printf("[OK]\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[0;31m");
		printf("[KO]\n");
		printf("\033[0m");
	}
	res = ft_strlen("Salut bro tu \0vas bien ?");
	res1 = strlen("Salut bro tu \0vas bien ?");
	printf("[Salut bro tu \\0vas bien ?] = ");
	if (res == res1)
	{
		printf("\033[0;32m");
		printf("[OK]\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[0;31m");
		printf("[KO]\n");
		printf("\033[0m");
	}
	printf("\033[1;33m");
	printf("%20%--done--%%\n\n");
	printf("\033[0m");

	printf("\033[1;34m");
	printf("%20%--write--%%\n");
	printf("\033[0m");


	res = ft_write(1, "", 1);
	res1 = write(1, "\n", 1);
	printf("[] = ");
	if (res == res1)
	{
		printf("\033[0;32m");
		printf("[OK]\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[0;31m");
		printf("[KO]\n");
		printf("\033[0m");
	}

	res = ft_write(1, "ieukthfiSUODLghISOLgdhkjvmsOLdg\n", 0);
	res1 = write(1, "ieukthfiSUODLghISOLgdhkjvmsOLdg\n", 0);
	printf("[ieukthfiSUODLghISOLgdhkjvmsOLdg] = ");
	if (res == res1)
	{
		printf("\033[0;32m");
		printf("[OK]\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[0;31m");
		printf("[KO]\n");
		printf("\033[0m");
	}

	res = ft_write(1, "Salut bro tu vas bien ?\n", 0);
	res1 = write(1, "Salut bro tu vas bien ?\n", 0);
	printf("[Salut bro tu vas bien ?] = ");
	if (res == res1)
	{
		printf("\033[0;32m");
		printf("[OK]\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[0;31m");
		printf("[KO]\n");
		printf("\033[0m");
	}

	res = ft_write(1, "Salut bro tu \0vas bien ?\n", 0);
	res1 = write(1, "Salut bro tu \0vas bien ?\n", 0);
	printf("[Salut bro tu \\0vas bien ?] = ");
	if (res == res1)
	{
		printf("\033[0;32m");
		printf("[OK]\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[0;31m");
		printf("[KO]\n");
		printf("\033[0m");
	}
	printf("\033[1;31m");
	printf("\ntest-erreur : ");
	printf("\033[0m");
	printf("\n");;

	res = ft_write(-45, "Salut bro tu \0vas bien ?\n", 26);
	res1 = write(-45, "Salut bro tu \0vas bien ?\n", 26);
	printf("-45, [Salut bro tu \\0vas bien ?], 26 = ");
	if (res == res1)
	{
		printf("\033[0;32m");
		printf("[OK]\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[0;31m");
		printf("[KO]\n");
		printf("\033[0m");
	}

	res = ft_write(1, NULL, 26);
	res1 = write(1, NULL, 26);
	printf("1, [NULL], 26 = ");
	if (res == res1)
	{
		printf("\033[0;32m");
		printf("[OK]\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[0;31m");
		printf("[KO]\n");
		printf("\033[0m");
	}

	res = ft_write(1, "Salut bro tu vas bien ?\n", -10);
	res1 = write(1, "Salut bro tu vas bien ?\n", -10);
	printf("-45, [Salut bro tu \\0vas bien ?], 2 = ");
	if (res == res1)
	{
		printf("\033[0;32m");
		printf("[OK]\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[0;31m");
		printf("[KO]\n");
		printf("\033[0m");
	}

	printf("\033[1;33m");
	printf("%20%--done--%%\n\n");
	printf("\033[0m");

	printf("\033[1;34m");
	printf("%20%--read--%%\n");
	printf("\033[0m");
	r = ft_read(fd, buffer, 80);
	buffer[r] = 0;
	printf("'%s : %ld = ", buffer, r);
	if (r == 80)
	{
		printf("\033[0;32m");
	 	printf("[OK]\n");
	 	printf("\033[0m");
	}
	else
	{
		printf("\033[0;31m");
		printf("[KO]\n");
		printf("\033[0m");
	}
	r = ft_read(fd, buffer, 25);
	buffer[r] = 0;
	printf("'%s : %ld = ", buffer, r);
	if (r == 25)
	{
		printf("\033[0;32m");
	 	printf("[OK]\n");
	 	printf("\033[0m");
	}
	else
	{
		printf("\033[0;31m");
		printf("[KO]\n");
		printf("\033[0m");
	}
	r = ft_read(fd, buffer, 4);
	buffer[r] = 0;
	printf("'%s : %ld = ", buffer, r);
	if (r == 4)
	{
		printf("\033[0;32m");
	 	printf("[OK]\n");
	 	printf("\033[0m");
	}
	else
	{
		printf("\033[0;31m");
		printf("[KO]\n");
		printf("\033[0m");
	}
	r = ft_read(fd, buffer, 0);
	buffer[r] = 0;
	printf("'%s : %ld = ", buffer, r);
	if (r == 0)
	{
		printf("\033[0;32m");
	 	printf("[OK]\n");
	 	printf("\033[0m");
	}
	else
	{
		printf("\033[0;31m");
		printf("[KO]\n");
		printf("\033[0m");
	}
	close(fd);

	printf("\033[1;33m");
	printf("%20%--done--%%\n\n");
	printf("\033[0m");

	printf("\033[1;34m");
	printf("%20%--strcmp--%%\n");
	printf("\033[0m");

	res = ft_strcmp("Salut", "Salut");
	res1 = strcmp("Salut", "Salut");
	printf("[Salut] | [Salut]= ");
	if (res == res1)
	{
		printf("\033[0;32m");
		printf("[OK]\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[0;31m");
		printf("[KO]\n");
		printf("\033[0m");
	}
	res = ft_strcmp("", "");
	res1 = strcmp("", "");
	printf("[] | []= ");
	if (res == res1)
	{
		printf("\033[0;32m");
		printf("[OK]\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[0;31m");
		printf("[KO]\n");
		printf("\033[0m");
	}
	res = ft_strcmp("qwertjkl\n", "qwertyuiop\n");
	res1 = strcmp("qwertjkl\n", "qwertyuiop\n");
	printf("[qwertjkl] | [qwertyuiop] = ");
	if (res == res1)
	{
		printf("\033[0;32m");
		printf("[OK]\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[0;31m");
		printf("[KO]\n");
		printf("\033[0m");
	}
	res = ft_strcmp("qwertyuiop\n", "qwerty\n");
	res1 = strcmp("qwertyuiop\n", "qwerty\n");
	printf("[qwertyuiop] | [qwerty] = ");
	if (res == res1)
	{
		printf("\033[0;32m");
		printf("[OK]\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[0;31m");
		printf("[KO]\n");
		printf("\033[0m");
	}
	res = ft_strcmp("789\n", "987\n");
	res1 = strcmp("789\n", "987\n");
	printf("[789] | [987] = ");
	if (res == res1)
	{
		printf("\033[0;32m");
		printf("[OK]\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[0;31m");
		printf("[KO]\n");
		printf("\033[0m");
	}
	res = ft_strcmp("qwerty\0uiop\n", "qwerty\0uiop\n");
	res1 = strcmp("qwerty\0uiop\n", "qwerty\0uiop\n");
	printf("[qwerty\\0uiop] | [qwerty\\0uiop] = ");
	if (res == res1)
	{
		printf("\033[0;32m");
		printf("[OK]\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[0;31m");
		printf("[KO]\n");
		printf("\033[0m");
	}
	printf("\033[1;33m");
	printf("%20%--done--%%\n\n");
	printf("\033[0m");

	printf("\033[1;34m");
	printf("%20%--strcpy--%%\n");
	printf("\033[0m");

	printf("%s : Salut = ", ft_strcpy(buffer, "Salut"));
	if (strcmp(buffer, "Salut") == 0)
	{
		printf("\033[0;32m");
		printf("[OK]\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[0;31m");
		printf("[KO]\n");
		printf("\033[0m");
	}
	printf("%s : = ", ft_strcpy(buffer, ""));
	if (strcmp(buffer, "") == 0)
	{
		printf("\033[0;32m");
		printf("[OK]\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[0;31m");
		printf("[KO]\n");
		printf("\033[0m");
	}
	printf("%s : qwertyuiop = ", ft_strcpy(buffer, "qwertyuiop"));
	if (strcmp(buffer, "qwertyuiop") == 0)
	{
		printf("\033[0;32m");
		printf("[OK]\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[0;31m");
		printf("[KO]\n");
		printf("\033[0m");
	}
	printf("%s : qwerty = ", ft_strcpy(buffer, "qwerty"));
	if (strcmp(buffer, "qwerty") == 0)
	{
		printf("\033[0;32m");
		printf("[OK]\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[0;31m");
		printf("[KO]\n");
		printf("\033[0m");
	}
	printf("%s : 987 = ", ft_strcpy(buffer, "987"));
	if (strcmp(buffer, "987") == 0)
	{
		printf("\033[0;32m");
		printf("[OK]\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[0;31m");
		printf("[KO]\n");
		printf("\033[0m");
	}
	printf("%s : qwerty = ", ft_strcpy(buffer, "qwerty\0uiop"));
	if (strcmp(buffer, "qwerty\0uiop") == 0)
	{
		printf("\033[0;32m");
		printf("[OK]\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[0;31m");
		printf("[KO]\n");
		printf("\033[0m");
	}

	printf("\033[1;33m");
	printf("\n%20%--done--%%\n\n");
	printf("\033[0m");

	printf("\033[1;34m");
	printf("%20%--strdup--%%\n");
	printf("\033[0m");

	test = ft_strdup("Salut");
	printf("%s : Salut = ", test);
	if (strcmp(test, "Salut") == 0)
	{
		printf("\033[0;32m");
		printf("[OK]\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[0;31m");
		printf("[KO]\n");
		printf("\033[0m");
	}
	free(test);
	test = ft_strdup("");
	printf("%s : = ", test);
	if (strcmp(test, "") == 0)
	{
		printf("\033[0;32m");
		printf("[OK]\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[0;31m");
		printf("[KO]\n");
		printf("\033[0m");
	}
	free(test);
	test = ft_strdup("qwertyuiop");
	printf("%s : qwertyuiop = ", test);
	if (strcmp(test, "qwertyuiop") == 0)
	{
		printf("\033[0;32m");
		printf("[OK]\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[0;31m");
		printf("[KO]\n");
		printf("\033[0m");
	}
	free(test);
	test = ft_strdup("qwerty");
	printf("%s : qwerty = ", test);
	if (strcmp(test, "qwerty") == 0)
	{
		printf("\033[0;32m");
		printf("[OK]\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[0;31m");
		printf("[KO]\n");
		printf("\033[0m");
	}
	free(test);
	test = ft_strdup("987");
	printf("%s : 987 = ", test);
	if (strcmp(test, "987") == 0)
	{
		printf("\033[0;32m");
		printf("[OK]\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[0;31m");
		printf("[KO]\n");
		printf("\033[0m");
	}
	free(test);
	test = ft_strdup("qwerty\0uiop");
	printf("%s : qwerty = ", test);
	if (strcmp(test, "qwerty\0uiop") == 0)
	{
		printf("\033[0;32m");
		printf("[OK]\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[0;31m");
		printf("[KO]\n");
		printf("\033[0m");
	}
	free(test);
	test = ft_strdup(NULL);
	printf("%s : (null) = ", test);
	if (test == NULL)
	{
		printf("\033[0;32m");
		printf("[OK]\n");
		printf("\033[0m");
	}
	else
	{
		printf("\033[0;31m");
		printf("[KO]\n");
		printf("\033[0m");
	}
	printf("\033[1;33m");
	printf("\n%20%--done--%%\n\n");
	printf("\033[0m");
	return (0);
}
