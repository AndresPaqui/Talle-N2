#include <stdio.h>
#include <string.h>
#include "funciones.h"
void Leer(char cadena[]);
float LeerFloat();
int main () {
    //Definir variables
    char nombre [10][20];
    char temporal[20];

    float precio [10];
    float Pinventario = 0;
    float promedio = 0;

    int contador=0;
    int opc = 0;
    int c;
    //Menu 
    do{
        printf("----------------------MENU----------------------\n");
        printf("1.Ingresar producto\n");
        printf("2.Calcular precio total del inventario\n");
        printf("3.Producto mas caro y mas barato\n");
        printf("4.Precio promedio de los productos\n");
        printf("5.Buscar producto por su nombre\n");
        printf("6.Salir\n");
        printf("------------------------------------------------\n");
        printf(">> ");
        opc = LeerFloat();

        switch (opc)
        {
        case 1:
        printf("Ingrese el nombre de su producto %d: \n",contador + 1);
        Leer(nombre[contador]);
        printf(" %s :registrado/a exitosamente!\n", nombre[contador]);
    
        printf("Ingrese el precio del producto: %s\n", nombre[contador]);
        printf(">> ");
        precio[contador]=LeerFloat();
        contador++;
            break;
        case 2:
            
            break;
        case 3:
            /* code */
            break;
        case 4:
            /* code */
            break;
        case 5:
            




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
void Leer(char cadena[]){
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
        fgets(cadena,20,stdin); //Leer materia
        int lan = strlen(cadena) - 1; //Encontrar el "\n"
        cadena[lan]='\0'; //Reemplazar el "\n" por "\0"
}
float LeerFloat() {
    float valor;
    int c;

    while (1) {
        if (scanf("%f", &valor) == 1) {
            break; // Entrada válida
        } else {
            while ((c = getchar()) != '\n' && c != EOF); // Limpiar buffer
            printf("**Error, Ingrese un numero valido.**\n");
            printf(">> ");

        }
    }

    return valor;
}
