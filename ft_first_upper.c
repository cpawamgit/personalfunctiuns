/*

header 42 to insert

*/

#include "libft.h"

char *ft_first_upper(char *str)
{
	if (str)
	{
		if (ft_islower(str[0]))
			str[0] = str[0] - 32;
	}
	return (str);
}
