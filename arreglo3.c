#include <stdio.h>

/*  
* este programa permite trabajar con una arreglo a traves de un apuntador
*/

int main()
{

    int array[10];
    float *apuntador;
    
    apuntador = array; // Asignando la direccion del primer elemento del array al apuntador 
    //apuntador = &array[0];

        for (int i = 0; i < 10; i++)
        {
            printf("Ingresa el valor del elemento %d: ", i);
            //scanf("&d", &array[i]);
            scanf("%d", (apuntador + i));
            printf("[");
            for (int i = 0; j < 10; i++){
                printf("%d (%p) ,", ) 
            }

            
        }
    return 0;
}