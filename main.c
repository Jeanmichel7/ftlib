/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 14:33:55 by jrasser           #+#    #+#             */
/*   Updated: 2022/02/22 23:51:57 by jrasser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int	main(void)
{
	char 	test;
	char	*str;
	test = '5';
	str = "Bien le bonjour";

	printf("isalpha : %d\n", isalpha(123));
	printf("ft_isalpha : %d\n\n", ft_isalpha(123));
	
	printf("isdigit : %d\n", isdigit(test));
	printf("ft_isdigit : %d\n\n", ft_isdigit(test));
	
	printf("isalnum : %d\n", isalnum(test));
	printf("ft_isalnum : %d\n\n", ft_isalnum(test));
	
	printf("isascii : %d\n", isascii(test));
	printf("ft_isascii : %d\n\n", ft_isascii(test));
	
	printf("isprint : %d\n", isprint(test));
	printf("ft_isprint : %d\n\n", ft_isprint(test));
	
	printf("strlen : %lu\n", strlen(str));
	printf("ft_strlen : %lu\n\n", ft_strlen(str));



	// *************  memset ***************

	char array[] = "Bonjour";
	char array_real[] = "Bonjour";
    size_t size = sizeof(char) * 4;
	int length;
	int i;

	length = 7;
	i = 0;
    //Display the initial values 
    printf("memset :      ");
	while (i < length)
	{
        printf( "%c", array_real[i]);
		i++;
	}

    //Reset the memory bloc 
    memset(array_real, 112, size);
    ft_memset(array, 112, size);

    //Display the new values
	i = 0;
    printf("\nretour real : ");
	while (i < length)
	{
        printf( "%c", array_real[i]);
		i++;
	}   
	printf("\nretour mine : ");
	i = 0;
	while (i < length)
	{
        printf( "%c", array[i]);
		i++;
	}
	

    printf("\n\n");







	// *************  bzero  ***************

	int array2_real[] = {1, 12, 13, 33, 42};
	int array2[] = {1, 12, 13, 33, 42};
    int length2;

	size = sizeof(int) * 3;
    //Display the initial values
    printf("bzero :       ");
	i = 0;
	length2 = 5;
	while(i < length2)
	{
        printf( "%d ", array2[i] );
		i++;
	}

    //Reset the memory bloc 
    bzero(array2_real, size);
    ft_bzero(array2, size);

    //Display the new values
	i = 0;
    printf("\nretour real : ");
	while (i < length2)
	{
        printf( "%d ", array2_real[i]);
		i++;
	}
    printf("\nretour mine : ");
	i = 0;
	while (i < length2)
	{
        printf( "%d ", array2[i] );
		i++;
	}
	printf("\n\n");





	// *************  memcpy  *************** 

    printf("memcpy :      ");
	int 	array3_real[] = {1, 12, 13, 33, 42};
	int		dest_real[5];
	int 	array3[] = {1, 12, 13, 33, 42};
	int		dest[5];
    int 	length3;
	int 	*p_real;
	int 	*p;

	size = sizeof(int) * 3;
	length3 = 5;

    //Display the initial values
	i = 0;
	while(i < length3)
	{
        printf( "%d ", array3[i] );
		i++;
	}

    //Reset the memory bloc 
    p_real = memcpy(dest_real, array3_real, size);
    p = ft_memcpy(dest, array3, size);

    //Display the new values
	i = 0;
    printf("\nretour real : ");
	while (i < length3)
	{
        printf( "%d ", *(char*)(dest_real + i));
		i++;
	}
	printf("%p \nretour mine : ", &p_real);
	i = 0;
	while (i < length3)
	{
        printf( "%d ", *(char*)(dest + i));
		i++;
	}
	printf("%p \n\n", &p);








	//  ************   mememove   ************
	int length4;
    int data[] = { 20, 30, 40, 50, 60, 70, 80, 90, 100, 0 };

	length4 = 10;
    // On affiche le contenu de la collection
    for(int i = 0; i < length4; i++)
   	{
        printf( "%d ", data[i]);
    }
    printf("\n");

    // On décale les éléménts dans la collection ...
    const void * source = (void *) data;
    void * destination = (void *) (data + 3);

    const void * src2 = (void *) data;
    void * dest2 = (void *) (data + 1);
    
	size = 5 * sizeof(int);

	printf("data : %p, src : %p, dest : %p\n", &data, &source, &destination);

	int	*tab = memmove(destination, source, size);
	//ft_memmove(dest2, src2, size);

    // On affiche le contenu de la collection
    for(int i=0; i<length4; i++)
	{
        printf( "%d ", tab[i] );
    }
	printf("\n");
	
	for(int i=0; i<length4; i++)
	{
        printf( "%d ", *((int *)(destination + i)));
    }
	printf("\n");
	
	for(int i=0; i<length4; i++)
	{
        printf( "%d ", data[i] );
    }
	printf("\n");
	
	for(int i=0; i<length4; i++)
	{
        printf( "%d ", *((int *)(source + i)));
    }
	printf("\n");






	
	
	/*	
	printf("strlcpy : %lu\n", strlcpy(str));
	printf("ft_strlcpy : %lu\n", ft_strlcpy(str));
	
	printf("strlcat : %lu\n", strlcat(str));
	printf("ft_strlcat : %lu\n", ft_strlcat(str));
	
	printf("toupper : %lu\n", toupper(str));
	printf("ft_toupper : %lu\n", ft_toupper(str));
	
	printf("tolower : %lu\n", tolower(str));
	printf("ft_tolower : %lu\n", ft_tolower(str));
	
	printf("strchr : %lu\n", strchr(str));
	printf("ft_strchr : %lu\n", ft_strchr(str));
	
	printf("strrchr : %lu\n", strrchr(str));
	printf("ft_strrchr : %lu\n", ft_strrchr(str));
	
	printf("strncmp : %lu\n", strncmp(str));
	printf("ft_strncmp : %lu\n", ft_strncmp(str));
	
	printf("memchr : %lu\n", memchr(str));
	printf("ft_memchr : %lu\n", ft_memchr(str));
	
	printf("memcmp: %lu\n", memcmp(str));
	printf("ft_memcmp : %lu\n", ft_memcmp(str));
	
	printf("strnstr : %lu\n", strnstr(str));
	printf("ft_strnstr : %lu\n", ft_strnstr(str));
	
	printf("atoi : %lu\n", atoi(str));
	printf("ft_atoi : %lu\n", ft_atoi(str));
*/


	return (0);
}
