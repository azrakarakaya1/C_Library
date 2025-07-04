#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
    char    *str;
    size_t  len1;
    size_t  len2;

    if (!s1 || !s2)
        return (NULL);
    len1 = ft_strlen(s1);
    len2 = ft_strlen(s2);
    str = malloc(len1 + len2 + 1);
    if (!str)
        return (NULL);
    
    ft_memcpy(str, s1, len1);
    ft_memcpy(str + len1, s2, len2);
    str[len1 + len2] = '\0';
    return (str);
}