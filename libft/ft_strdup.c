#include "../push_swap.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;
	size_t	s1_len;

	s1_len = ft_strlen(s1) + 1;
	s2 = (char *) malloc((s1_len) * sizeof(char));
	if (!s2)
		return (0);
	ft_strlcpy(s2, s1, s1_len);
	return (s2);
}
