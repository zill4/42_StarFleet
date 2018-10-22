

#include "bistro.h"

int	ft_isOp(char c)
{
	if (c == '+' || c == '/' || c == '*' || c == '-')
		return (1);
	else
		return (0);
}
