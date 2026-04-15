#include <stdio.h>
int main()
{

    int array[7];
    float array2[10];

    printf ("El tamaño de un entero en bytes es: %ld\n", sizeof(int));
    printf ("El tamaño de un flotante en bytes es: %ld\n", sizeof(float));
    for (int i = 0; i < 7; i++)
    {
    printf("La direccion de elemento %d es: %p\n", i, &array[i]);
    }
    for (int j = 0; j < 10; j++)
    {
    printf("La direccion de elemento %d es: %p\n", j, &array2[j]);
    }
    return 0;
}