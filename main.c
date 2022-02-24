/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrasser <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 14:33:55 by jrasser           #+#    #+#             */
/*   Updated: 2022/02/24 16:40:21 by jrasser          ###   ########.fr       */
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







    /*
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
     */



    // *****************  memmove  ***************
    printf("\n\n**************** mememove *************\n");

    const char *src_mememove;
    char dst_mememove[12];

    src_mememove = "Hello world";
    printf("src  : %s %p\n", src_mememove, &src_mememove);

    i = -1;
    while (src_mememove[++i])
        dst_mememove[i] = src_mememove[i + 6];
    dst_mememove[5] = ' ';
    dst_mememove[6] = 't';
    dst_mememove[7] = 'h';
    dst_mememove[8] = 'e';
    dst_mememove[9] = 'r';
    dst_mememove[10] = 'e';
    printf("dest : %s %p\n", dst_mememove, &dst_mememove);
    
    printf("%s\n", ft_memmove(dst_mememove, src_mememove, 0));
    printf("%s\n",    memmove(dst_mememove, src_mememove, 0));

    printf("%s\n", ft_memmove(dst_mememove, src_mememove, sizeof(char) * 6));
    printf("%s\n",    memmove(dst_mememove, src_mememove, sizeof(char) * 6));



    // **************** mememove tab int ****************
    int decalage = 3;
    printf("\n\n*************** mememove_int **********\ndecalage : %d\n", decalage);


    
    int data2[12] = {0,1,2,3,4,5,6,7,8,9,10,11};
    const int    *source2 = data2;
    int *destination2 = data2 + decalage;

    i = 0;
    printf("src :  ");
    while (i < 12)
    {
        //printf("src  : %d %p\n", *((int *)source2+ i), (int *)source2 + i);
        printf("%d ", *((int *)source2+ i));
        i++;
    }
    printf("\ndest : ");
    i = 0;
    while (i < 12)
    {
        if (i >= decalage)
        {
           *((int *)destination2 + i) = i + decalage;
        }
        //printf("dest : %d %p\n", *((int *)destination2 + i), ((int *)destination2 + i));
        printf("%d ", *((int *)destination2 + i));
        i++;
    }
    printf("\nretour mine :\n");
    void *str_res2 = ft_memmove(destination2, source2, sizeof(int) * 5);
    i = 0;
    while (i < 12)
    {
        //printf("retour mine  : %d %p\n", *((int *)str_res2 + i),  ((int *)str_res2 + i));
        printf("%d ", *((int *)str_res2 + i));
        i++;
    }
    printf("\n");



    int data[12] = {0,1,2,3,4,5,6,7,8,9,10,11};
    const int    *source = data;
    int *destination = data + decalage;

    i = 0;
    printf("src :  ");
    while (i < 12)
    {
        //printf("src  : %d %p\n", *((int *)source+ i), (int *)source + i);
        printf("%d ", *((int *)source+ i));
        i++;
    }
    printf("\ndest : ");
    i = 0;
    while (i < 12)
    {
        if (i >= decalage)
        {
           *((int *)destination + i) = i + decalage;
        }
        //printf("dest : %d %p\n", *((int *)destination + i), ((int *)destination + i));
        printf("%d ", *((int *)destination + i));
        i++;
    }
    printf("\n");
    void *str_res;
    str_res = memmove(destination, source, sizeof(int) * 5);
    i = 0;
    printf("retour real :\n");
    while (i < 12)
    {
        //printf("retour real  : %d %p\n", *((int *)str_res + i),  ((int *)str_res + i));
        printf("%d ", *((int *)str_res + i));
        i++;
    }
    printf("\n");




    // ****************  strlcpy  *****************
    printf("\n\n**************** strlcpy *************\n");
    char            dest_strlcpy[100];

    printf("res : %zu, %s\n", ft_strlcpy(dest_strlcpy, "Message numero 1", 100), dest);
    printf("res : %zu, %s\n",    strlcpy(dest_strlcpy, "Message numero 1", 10), dest);

    printf("res : %zu, %s\n", ft_strlcpy(dest_strlcpy, "Message numero 1", 1), dest);
    printf("res : %zu, %s\n",    strlcpy(dest_strlcpy, "Message numero 1", 1), dest);

    printf("res : %zu, %s\n", ft_strlcpy(dest_strlcpy, "haaa", 30), dest);
    printf("res : %zu, %s\n",    strlcpy(dest_strlcpy, "Message numero 1", 1), dest);



    // ****************  strlcat  *****************
    printf("\n\n**************** strlcat *************\n");
    char    dest_cat_mine[200] = "Debut du message";
    char    dest_cat_real[200] = "Debut du message";

    printf("dest : %zu, %s\n", ft_strlcat(dest_cat_mine, " ,fin du message", 10), dest_cat_mine);
    printf("dest : %zu, %s\n",  strlcat(dest_cat_real, " ,fin du message", 10), dest_cat_real);
    
    dest_cat_mine[16] = '\0';
    dest_cat_real[16] = '\0';
    printf("dest : %zu, %s\n", ft_strlcat(dest_cat_mine, " ,fin du message", 5), dest_cat_mine);
    printf("dest : %zu, %s\n",  strlcat(dest_cat_real, " ,fin du message", 5), dest_cat_real);
    
    dest_cat_mine[16] = '\0';
    dest_cat_real[16] = '\0';
    printf("dest : %zu, %s\n", ft_strlcat(dest_cat_mine, "", 10), dest_cat_mine);
    printf("dest : %zu, %s\n",  strlcat(dest_cat_real, "", 10), dest_cat_real);



    // ****************  toupper  *****************
    printf("\n\n**************** toupper *************\n");

    printf("%c\n", ft_toupper('a'));
    printf("%c\n",    toupper('a'));

    printf("%c\n", ft_toupper('z'));
    printf("%c\n",    toupper('z'));

    printf("%c\n", ft_toupper('m'));
    printf("%c\n",    toupper('m'));

    printf("%c\n", ft_toupper('n'));
    printf("%c\n",    toupper('n'));

    printf("%c\n", ft_toupper('-'));
    printf("%c\n",    toupper('-'));



    // ****************  toupper  *****************
    printf("\n\n**************** toupper *************\n");

    printf("%c\n", ft_tolower('A'));
    printf("%c\n",    tolower('A'));

    printf("%c\n", ft_tolower('Z'));
    printf("%c\n",    tolower('Z'));

    printf("%c\n", ft_tolower('N'));
    printf("%c\n",    tolower('N'));

    printf("%c\n", ft_tolower('M'));
    printf("%c\n",    tolower('M'));

    printf("%c\n", ft_tolower('-'));
    printf("%c\n",    tolower('-'));



    // ****************  strchr  *****************
    printf("\n\n**************** strchr *************\n");

    printf("%s\n", ft_strchr("Un message ici assez long", 'e'));
    printf("%s\n",    strchr("Un message ici assez long", 'e'));

    printf("%s\n", ft_strchr("Un message ici assez long", 'b'));
    printf("%s\n",    strchr("Un message ici assez long", 'b'));



    // ****************  strrchr  *****************
    printf("\n\n**************** strrchr *************\n");

    printf("%s\n", ft_strrchr("Un message ici assez long", 'e'));
    printf("%s\n",    strrchr("Un message ici assez long", 'e'));

    printf("%s\n", ft_strrchr("Un message ici assez long", 'b'));
    printf("%s\n",    strrchr("Un message ici assez long", 'b'));




    // ****************  strncmp  *****************
    printf("\n\n**************** strncmp *************\n");

    printf("res : %d\n", ft_strncmp("Bonjour", "Bonjoyr", 0));
    printf("res : %d\n",    strncmp("Bonjour", "Bonjoyr", 0));

    printf("res : %d\n", ft_strncmp("Bonjour", "Bonjoyr", 7));
    printf("res : %d\n",    strncmp("Bonjour", "Bonjoyr", 7));

    printf("res : %d\n", ft_strncmp("Bonjour", "Bonjour", 100));
    printf("res : %d\n",    strncmp("Bonjour", "Bonjour", 100));

    printf("res : %d\n", ft_strncmp("Bonjour", "", 1));
    printf("res : %d\n",    strncmp("Bonjour", "", 1));

    printf("res : %d\n", ft_strncmp("", "BonJour", 1));
    printf("res : %d\n",    strncmp("", "BonJour", 1));



    // ****************  memchr  *****************
    printf("\n\n**************** memchr *************\n");
    const char  *str_memchr;
    str_memchr = "Bonjour today";

    printf("res : %s\n", ft_memchr(str_memchr, 'j', 15));
    printf("res : %s\n",    memchr(str_memchr, 'j', 15));

    printf("res : %s\n", ft_memchr(str_memchr, ' ', 120));
    printf("res : %s\n",    memchr(str_memchr, ' ', 120));

    printf("res : %s\n", ft_memchr(str_memchr, 'j', 1));
    printf("res : %s\n",    memchr(str_memchr, 'j', 1));

    printf("res : %s\n", ft_memchr(str_memchr, 1236, 0));
    printf("res : %s\n",    memchr(str_memchr, 1236, 0));


    // ****************  memcmp  *****************
    printf("\n\n**************** memcmp *************\n");
    char *str_memcmp1;
    char *str_memcmp2;

    str_memcmp1 = "Message";
    str_memcmp2 = "MesSage";
    printf("res : %d\n", ft_memcmp(str_memcmp1, str_memcmp2, 14));
    printf("res : %d\n",    memcmp(str_memcmp1, str_memcmp2, 14));

    printf("res : %d\n", ft_memcmp(str_memcmp1, str_memcmp2, 2));
    printf("res : %d\n",    memcmp(str_memcmp1, str_memcmp2, 2));

    printf("res : %d\n", ft_memcmp(str_memcmp1, "", 0));
    printf("res : %d\n",    memcmp(str_memcmp1, "", 0));

    printf("res : %d\n", ft_memcmp("", str_memcmp2, 1)); // -1
    printf("res : %d\n",    memcmp("", str_memcmp2, 1)); // -77


    // ****************  strnstr  *****************
    printf("\n\n**************** strnstr *************\n");
    char    *str_strnstr_big;
    char    *str_strnstr_little;
    size_t    len;

    len = 10;
    str_strnstr_big = "Un gros message ici parparce que j'ai aucune inspi";
    str_strnstr_little = "parce que j'ai";

    printf("%s\n", ft_strnstr(str_strnstr_big, str_strnstr_little, len));
    printf("%s\n", strnstr(str_strnstr_big, str_strnstr_little, len));



    // ****************  atoi  *****************
    printf("\n\n**************** atoi *************\n");

    printf("%d\n", ft_atoi("          -10230  "));
    printf("%d\n",    atoi("          -10230  "));

    printf("%d\n", ft_atoi("+456a1 2"));
    printf("%d\n",    atoi("+456a1 2"));

    printf("%d\n", ft_atoi("-00  "));
    printf("%d\n",    atoi("-00  "));



    // ****************  calloc  *****************
    printf("\n\n**************** calloc *************\n");

    printf("%p\n", ft_calloc(10, sizeof(char)));
    printf("%p\n",    calloc(10, sizeof(char)));


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
