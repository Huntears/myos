#include <string.h>

size_t strlen(char const *str)
{
    size_t len = 0;
    while (str[len])
        len++;
    return len;
}
