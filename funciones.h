#ifndef FUNCIONES_H // Asegura que el contenido de funciones.h se procese unicamente una vez
#define FUNCIONES_H  //Si no esta definido, procesa este bloque, luego lo define. Y finaliza con #endif
void menu();
void Leer(char cadena[]);
void NoRepeat(char nombre[][20], int cont);
float LeerFloat();
void calcularInventario(float precio[], int numobjetos);
void ProductosCaroBarato(float precio[], int cont, char nombres [][20]);
void encontrarProducto(char nombre[][20], int cont, float precio[]);
void precioPromedioP(float precios[], int contador);

#endif