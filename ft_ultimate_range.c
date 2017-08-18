#include <stdlib.h>

int     ft_ultimate_range(int **range, int min, int max)
{
    int i;
    int *tab;

    if (min >= max)
    {
        *range = NULL;
        return (NULL);
    }
    tab = (int*)malloc(sizeof(*tab) * (max - min));
    i = 0;
    while (min < max)
    {
        tab[i] = min;
        i++;
        min++;
    }
    *range = tab;
    return (i);
}
