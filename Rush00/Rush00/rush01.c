void    ft_putchar(char c);
void    rush(int n2, int n1)
{
    int    j; //x - horizontal
    int    i; //y - vertical

    i = 1;
    while (i <= n1)
    {
        j = 1;
        while (j <= n2)
        {
            if ((i == 1 && j == 1) || (i == n1 && j == n2 && i > 1 && j > 1))
            {
                ft_putchar('/');
            }
            else if ((i == 1 && j == n2) || (j == 1 && i == n1))
                ft_putchar('\\');
            else if ((j == 1 || j == n2) || (i == 1 || i == n1))
                ft_putchar('*');
            else
                ft_putchar(' ');
            j++;
        }
        ft_putchar('\n');
        i++;
    }
}