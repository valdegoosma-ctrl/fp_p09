#include <stdio.h>

/*
 * este programa permite trabajar con un arreglo a traves de un apuntador
 */

int main()
{

    int array[10];
    int *apuntador;

    apuntador = &array[7]; // Asignando la direccion del primer elemento del array al apuntador
    // apuntador = &array[0];

    for (int i = -7; i < 8; i++)
    {
        printf("Ingresa el valor del elemento %d: ", i+7);
        // scanf("&d", &array[i]);
        scanf("%d", (apuntador + i));
    }

        printf("[");
        for (int i = -7; i < 8; i++)
        {
            printf("%d (%p) ,", *(apuntador + i), (apuntador + i));
        }
        printf("]\n");
        return 0;
    }