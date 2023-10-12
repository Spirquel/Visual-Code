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


    printf("char : %d octets", sizeof(char)); /*1 octet*/
    printf("\nint : %d octets", sizeof(int)); /*4 octets*/
    printf("\nfloat : %d octets", sizeof(float)); /*4 octets*/
    printf("\nlong : %d octets", sizeof(long)); /*4 octets en 32bits et 8 octets en 64 bits*/
    printf("\ndouble : %d octets", sizeof(double)); /*8 octets*/
    printf("\nImpro : %d octets", sizeof(IMpro)); /*16 octets (car float + int + double)*/

    return 0;
}