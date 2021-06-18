#include <unistd.h>
void	ft_putstr(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		write(1, &str[count], 1);
		count++;
	}
}

int main (void){
    char st[13] = "Hello world!";
    char *str;
    str = &st[0];
    ft_putstr(str);
}
