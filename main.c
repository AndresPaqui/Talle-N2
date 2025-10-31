#include <stdio.h>
#include <string.h>
#include "funciones.h"

int main () {
    //Definir variables
    char nombre [10][20];
    float precio [10];
    float Pinventario = 0;
    float promedio = 0;

    int opc = 0;

    //Menu 
    do{
        printf("----------------------Menu----------------------\n");
        printf("1.Ingresar producto\n");
        printf("2.Calcular precio total del inventario\n");
        printf("3.Producto mas caro y mas barato\n");
        printf("4.Precio promedio de los productos\n");
        printf("5.Buscar producto por su nombre\n");
        printf("6.salir\n");
        printf("------------------------------------------------\n");
        printf(">> ");
        scanf("%d", &opc);

    } while (opc != 6);



    return 0;
}