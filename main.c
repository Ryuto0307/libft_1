

#include "libft.h"
#include <stdio.h>

int main()
{
	char *str = ft_calloc(1, 2);
	str[0] = 'a';
	write(1, str, 2);
	printf("%s\n", str);
	free(str);
	return 0;
}
