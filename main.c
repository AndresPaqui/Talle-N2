#include <stdio.h>
#include <string.h>
#include "funciones.c"

int main()
{
    // Definir variables
    char nombre[10][20];
    char temporal[20];

    float precio[10];
    float Pinventario = 0;
    float promedio = 0;

    int contador = 0, opc = 0, c = 0;
    
    do{
        menu(); //Funcion imprimir menu

        opc = LeerFloat();

        if(opc > 6 || opc < 1) {
            printf("**Error, elija una opcion valida.**\n");
        }

        // Desarrollo

        switch (opc)
        {
        case 1:

            if(contador == 10) {
                printf("Maximo de productos registrados. \n");
                break;
            }

            printf("\n*Ingrese el nombre de su producto %d: \n>> ", contador + 1);
            Leer(nombre[contador]); // Llamamos a la funcion leer

            printf(" - %s, registrado/a exitosamente!\n", nombre[contador]);
            printf("\n*Ingrese el precio del producto: %s\n", nombre[contador]);
            printf(">> ");

            do{
                precio[contador] = LeerFloat(); // Llamamos a la funcion leerfloat

                if (precio[contador] <= 0){
                    printf("**Error, el precio no puede ser menor a 0. Ingrese un numero valido.**\n>> "); //imprimir error si ingresa valores negativos
                }

            } while (precio[contador] <= 0); // controlamos que no ingrese valores negativos

            printf(" - Precio de %s ($%.2f) registrado correctamente!!\n", nombre[contador], precio[contador]);

            contador++;
            break;
        case 2:
            if (contador == 0){
                printf("Primero debe ingresar un producto.\n");
                break;
            }
            calcularInventario(precio, contador);

            break;
        case 3:
            ProductosCaroBarato(precio, contador, nombre); //Llamar funcion, calcular barato, caro
            break;

        case 4:
            precioPromedioP(precio, contador);
            break;
        case 5:
            encontrarProducto(nombre, contador, precio);
            break;
        case 6:
            printf("\nGracias...\n");
            break;

        default:
            break;
        }

    } while (opc != 6);

    return 0;
}
