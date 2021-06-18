int	ft_strlen(char *str)
{
	int	 count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}

#include <stdio.h>
int main (void){
    char st[20] = "tenho 20 caracteres";
    char *str;
    str = &st[0];
    int a = ft_strlen(str);
    printf("%d\n", a);
}
