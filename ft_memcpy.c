#include "libft.h"

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t i;

    if (dest == NULL && src == NULL)
        return (0);
    i = 0;
    while (i < n)
    {
        ((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
        i++;
    }
    return (dest);
}