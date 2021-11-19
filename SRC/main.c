#include "ft_printf.h"
#include <stdio.h>

int main()
{
	
	system("clear");

	printf("\n----------------------------  Testing ft_printf [ Character ]  ----------------------------- \n\n");

	char	s;

	s = 'E';
	ft_printf("%s\n" , "|01| Just char");
	ft_printf("LENGTH ft_printf : %d\n", ft_printf("|%c|", s));
	printf("LENGTH printf    : %d\n\n", printf("|%c|", s));

	ft_printf("%s\n" , "|02| Flag [-]");
	ft_printf("LENGTH ft_printf : %d\n", ft_printf("|%-c|", s));
	printf("LENGTH printf    : %d\n\n", printf("|%-c|", s));

	
	return (0);
}