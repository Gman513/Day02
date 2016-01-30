void ft_putchar(char c);

void ft_print_numbers(void)
{
    char k;
    k = '0';
    
    while (k <= '9')
    {
        ft_putchar(k);
        k++;
    }
    ft_putchar('\n');
}
