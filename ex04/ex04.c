/* num[2] = Units, num[1] = Tens, num[0] = Hundreds */

int		ft_putchar(char c);

void	ft_print_comb(void)
{
    int	num[3] = {'0', '0', '0'};
    
    while (num[0] <= '9')
    {
        if ((num[1] < num[2]) && (num[0] < num[1]))
        {
            ft_putchar(num[0]);
            ft_putchar(num[1]);
            ft_putchar(num[2]);
            
            if (num[0] > '7')
            {
                ft_putchar(',');
                ft_putchar(' ');
            }
        }
        
        num[2]++;
        
        if (num[2] >= '9')
        {
            num[2] = '0';
            num[1]++;
        }
        if (num[1] > '9')
        {
            num[1] = '0';
            num[0]++;
        }
    }
}