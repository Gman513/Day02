void ft_putchar(char c);

void ft_print_reverse_alphabet(void)
{
    char k = 'z';
    while ( k >= 'a') 
    {
        ft_putchar(k);
        k = k - 1;
    }
    ft_putchar('\n'); 
}
