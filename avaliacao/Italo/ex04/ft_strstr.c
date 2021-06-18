/*
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	char ptr_1;
	char ptr_2;

	counter = 0;

	if (to_find == '\0')
	{
		return (str);
	}

	while (*str != '\0')
	{
		ptr_1 = str;
		ptr_2 = to_find;

		while () {

		}
	}

	return (str);
}

#include <stdio.h>
#include <bsd/string.h>

char	*ft_strstr(char *str, char *to_find);

int main(void)
{
	char str[] = "alguma coisa";
	char to_find_1[] = "coisa";
	char to_find_2[] = "coisaaaaa";

	printf("%s\n", strstr(str, ""));
	printf("%s\n", ft_strstr(str, ""));

	printf("Teste 1:\n");
	printf("Haystack: %s\n", str);
	printf("Needle: %s\n", to_find_1);
	printf("Expected:\n");
	printf("%s\n", ft_strstr(str, to_find_1));
	printf("Output:\n");
	printf("%s\n", strstr(str, to_find_1));
	printf("\n");
	printf("Teste 2:\n");
	printf("Haystack: %s\n", str);
	printf("Needle: %s\n", to_find_2);
	printf("Expected:\n");
	printf("%s\n", ft_strstr(str, to_find_2));
	printf("Output:\n");
	printf("%s\n", strstr(str, to_find_2));
	printf("\n");
	printf("Teste 3:\n");
	printf("Haystack: %s\n", str);
	printf("Needle: \"\"\n");
	printf("Expected:\n");
	printf("%s\n", strstr(str, ""));
	printf("Output:\n");
	printf("%s\n", ft_strstr(str, ""));
}

	SYNOPSIS
	#include <string.h>

	char *strstr(const char *haystack, const char *needle);

	#define _GNU_SOURCE

	#include <string.h>

	char *strcasestr(const char *haystack, const char *needle);

	DESCRIPTION
	The strstr() function finds the first occurrence of the substring needle
	in the string haystack.
	The terminating null bytes ('\0') are not compared.

	The strcasestr() function is like strstr(), but ignores the case of both
	arguments.

	RETURN VALUE
	These functions return a pointer to the beginning of the located substring,
	or NULL if the  sub‐string is not found.
*/