#include <stdio.h>

int main()
{
    struct taille_impro
    {
        int a; /*4 octets*/
        float b; /*4 octets*/
        double c; /*8 octets*/
    };

    typedef struct taille_impro IMpro;


    printf("char : %d octets", sizeof(char));
    printf("\nint : %d octets", sizeof(int));
    printf("\nfloat : %d octets", sizeof(float));
    printf("\nlong : %d octets", sizeof(long));
    printf("\ndouble : %d octets", sizeof(double));
    printf("\nImpro : %d octets", sizeof(IMpro));

    return 0;
}