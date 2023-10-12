#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* tab;

    tab = calloc(3, sizeof(int));

    for(int i = 0; i < 3; i++)
    {
        printf("\ntab calloc : tab[%d] = %d", i, tab[i]);
    }

    tab[0] = 25;
    tab[1] = 3;
    tab[2] = 36;

    printf("\n");

    tab = realloc(tab, 5*sizeof(int));

    tab[3] = 7;

     for(int j = 0; j < 5; j++)
    {
        printf("\ntab realloc : tab[%d] = %d", j, tab[j]); /*le calloc ne s'applique qu'aux case de son tableau; autrement dit les nouvelles cases ne sont pas forcément à zéro.*/
    }

    free(tab);
    
    return 0;
}