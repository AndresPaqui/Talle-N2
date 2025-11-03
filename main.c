#include <stdio.h>
#include <string.h>
#include "funciones.h"
void Leer(char cadena[]);
float LeerFloat();
void calcularInventario(float precio[], int numobjetos);

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
        printf(">> ");
        Leer(nombre[contador]); //Llamamos a la funcion leer
        printf(" - %s :registrado/a exitosamente!\n", nombre[contador]);
    
        printf("Ingrese el precio del producto: %s\n", nombre[contador]);
        printf(">> ");
        do{
            precio[contador]=LeerFloat(); //Llamamos a la funcion leerfloat

            if (precio[contador] <= 0){
                printf("**Error, el precio no puede ser menor a 0. Ingrese un numero valido. **\n");
                printf(">> ");
            }
            
        } while (precio[contador] <= 0);
        
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

void calcularInventario(float precio[], int numobjetos) {
    float Tprice = 0;
    for (int i = 0; i < numobjetos; i++){
        Tprice = Tprice + precio[i];
    }

    printf("El precio total de su inventario es: $%.2f\n", Tprice);
}