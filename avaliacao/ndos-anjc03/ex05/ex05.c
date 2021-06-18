#include <stdio.h>
#include <bsd/string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{

	char src1[9] = "Leonardo";
	char dest1[18] = "Leo";
	printf("ft_strlcat(\"\", \"Leonardo\", 1) = %d %s\n", ft_strlcat(dest1, src1, 1), dest1);
	char src2[9] = "Leonardo";
	char dest2[18] = "Leo";
	printf("   strlcat(\"\", \"Leonardo\", 1) = %ld %s\n", strlcat(dest2, src2, 1), dest2);
	char src3[9] = "Leonardo";
	char dest3[18] = "Leo";
	printf("ft_strlcat(\"\", \"Leonardo\", 10) = %d %s\n", ft_strlcat(dest3, src3, 10), dest3);
	char src4[9] = "Leonardo";
	char dest4[18] = "Leo";
	printf("   strlcat(\"\", \"Leonardo\", 10) = %ld %s\n", strlcat(dest4, src4, 10), dest4);
	char src5[9] = "Leonardo";
	char dest5[18] = "Leo";
	printf("ft_strlcat(\"\", \"Leonardo\", 18) = %d %s\n", ft_strlcat(dest5, src5, 18), dest5);
	char src6[9] = "Leonardo";
	char dest6[18] = "Leo";
	printf("   strlcat(\"\", \"Leonardo\", 18) = %ld %s\n", strlcat(dest6, src6, 18), dest6);
}
