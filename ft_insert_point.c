/*

header 42 to insert

*/

#include "libft.h"

char *ft_insert_point(char *str)
{
	char *new;

	new = NULL;
	if (str == NULL)
		return (NULL);
	if (str[ft_strlen(str) - 1] != '.')
	{
		new = (char*)malloc(sizeof(char) * ft_strlen(str) + 2);
		if (new)
		{
			ft_strcpy(new, str);
			new[ft_strlen(str)] = '.';
			new[ft_strlen(str) + 1] = '\0';
		}
	}
	return (new);
}