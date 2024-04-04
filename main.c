#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

int cargarArray(int *array, int dimension);
void mostrarArray(int *array, int dimension);
int sumarElementosDelArray(int *array, int dimension);
void pasarDatosDeUnArrayAUnaPila(int *array, int dimension, Pila *DADA);
float sumarElementosDelArray(float *array, int dimension);
void buscarCaracterEnArray(char *array, int dimension, char datoABuscar);
char obtenerMaximoCaracter(char arreglo[], int longitud);
bool esCapicua(int arreglo[], int longitud);
void invertirArreglo(int arreglo[], int longitud);
void intercalarArreglosOrdenados(char arreglo1[], int longitud1, char arreglo2[], int longitud2, char arregloResultante[]);

void generarVectorSumaAnteriores(int vector[], int longitud);
int main()
{
    //---------------------------------------------Ejercicio 1 ------------------------------------------------------------------//
    /*
    int dimensionArray = 10;
    int numArray[dimensionArray];

    int cantidadElementos = cargarArray(numArray, dimensionArray);

    printf("Se han cargado %d elementos en el arreglo:\n", cantidadElementos);
    for(int i = 0; i < 10; i++){
        printf("%d\n", numArray[i]);
    }
    */

    //---------------------------------------------Ejercicio 2 ------------------------------------------------------------------//
    /*
    int dimensionArray = 10;
    int numArray[dimensionArray];

    int cantidadElementos = cargarArray(numArray, dimensionArray);

    mostrarArray(numArray, cantidadElementos);
    */

    //---------------------------------------------Ejercicio 3 ------------------------------------------------------------------//
    /*
    int dimensionArray = 10;
    int numArray[dimensionArray];

    int cantidadElementos = cargarArray(numArray, dimensionArray);

    int resultado = sumarElementosDelArray(numArray, dimensionArray);
    */

    //---------------------------------------------Ejercicio 4 ------------------------------------------------------------------//
    /*
    int dimensionArray = 10;
    int numArray[dimensionArray];
    Pila DADA;
    inicpila(&DADA);

    int cantidadElementos = cargarArray(numArray, dimensionArray);

    pasarDatosDeUnArrayAUnaPila(numArray, dimensionArray, &DADA);
    */

    //---------------------------------------------Ejercicio 8 ------------------------------------------------------------------//
    /*
    char arreglo[] = {'a', 'b', 'c', 'z', 'f', 'h', 'm'};
    int longitud = sizeof(arreglo) / sizeof(arreglo[0]);

    char maximo = obtenerMaximoCaracter(arreglo, longitud);
    printf("El máximo carácter en el arreglo es: %c\n", maximo);
    */

    //---------------------------------------------Ejercicio 9 ------------------------------------------------------------------//
    /*
    int arreglo1[] = {1, 2, 3, 4, 3, 2, 1};
    int longitud1 = sizeof(arreglo1) / sizeof(arreglo1[0]);

    if (esCapicua(arreglo1, longitud1)) {
        printf("El arreglo 1 es capicúa.\n");
    } else {
        printf("El arreglo 1 no es capicúa.\n");
    }

    int arreglo2[] = {1, 2, 3, 4, 5, 6, 7};
    int longitud2 = sizeof(arreglo2) / sizeof(arreglo2[0]);

    if (esCapicua(arreglo2, longitud2)) {
        printf("El arreglo 2 es capicúa.\n");
    } else {
        printf("El arreglo 2 no es capicúa.\n");
    }
    */
    //---------------------------------------------Ejercicio 10 ------------------------------------------------------------------//
    /*
    int arreglo[] = {1, 2, 3, 4, 5, 6, 7};
    int longitud = sizeof(arreglo) / sizeof(arreglo[0]);

    printf("Arreglo original:\n");
    for (int i = 0; i < longitud; i++) {
        printf("%d ", arreglo[i]);
    }
    printf("\n");

    invertirArreglo(arreglo, longitud);

    printf("Arreglo invertido:\n");
    for (int i = 0; i < longitud; i++) {
        printf("%d ", arreglo[i]);
    }
    printf("\n");
    */
    //---------------------------------------------Ejercicio 11 ------------------------------------------------------------------//

    //---------------------------------------------Ejercicio 12 ------------------------------------------------------------------//
    /*
    char arreglo1[] = {'a', 'c', 'e', 'g'};
    int longitud1 = sizeof(arreglo1) / sizeof(arreglo1[0]);

    char arreglo2[] = {'b', 'd', 'f', 'h'};
    int longitud2 = sizeof(arreglo2) / sizeof(arreglo2[0]);

    // Calcular la longitud total del arreglo resultante
    int longitudResultante = longitud1 + longitud2;

    char arregloResultante[longitudResultante];

    // Llamar a la función para intercalar los arreglos
    intercalarArreglosOrdenados(arreglo1, longitud1, arreglo2, longitud2, arregloResultante);

    printf("Arreglo resultante intercalado y ordenado: ");
    for (int i = 0; i < longitudResultante; i++) {
        printf("%c ", arregloResultante[i]);
    }
    printf("\n");
    */

    //---------------------------------------------Ejercicio 13 ------------------------------------------------------------------//
    int vector[] = {1, 5, 6, 7, 8};
    int longitud = sizeof(vector) / sizeof(vector[0]);

    printf("Vector original: ");
    for (int i = 0; i < longitud; i++) {
        printf("%d ", vector[i]);
    }
    printf("\n");

    generarVectorSumaAnteriores(vector, longitud);

    printf("Vector con la suma de elementos anteriores: ");
    for (int i = 0; i < longitud; i++) {
        printf("%d ", vector[i]);
    }
    printf("\n");
    return 0;
}

//---------------------------------------------Ejercicio 1 ------------------------------------------------------------------//
int cargarArray(int *array, int dimension){
    int cantidadElementos = 0;
    for(int i = 0; i < dimension; i++){
        printf("Ingresa un número para el arreglo (ingresa -1 para terminar): ");
        int numero;
        scanf("%d", &numero);
        if(numero == -1) {
            break; // Si se ingresa -1, se termina la carga del arreglo
        }
        array[i] = numero;
        cantidadElementos++;
    }
    return cantidadElementos;
}

//---------------------------------------------Ejercicio 2 ------------------------------------------------------------------//
void mostrarArray(int *array, int dimension){
    printf("Se han cargado %d elementos en el arreglo:\n", dimension);
    for(int i = 0; i < dimension; i++){
        printf("%d\n", array[i]);
    }
}

//---------------------------------------------Ejercicio 3 ------------------------------------------------------------------//
int sumarElementosDelArray(int *array, int dimension){
    int acumulador = 0;
    for(int i = 0; i < dimension; i++){
        acumulador += array[i];
    }
    printf("El total de la suma de todos los numeros del array es %d", acumulador);
    return acumulador;
}

//---------------------------------------------Ejercicio 4 ------------------------------------------------------------------//
void pasarDatosDeUnArrayAUnaPila(int *array, int dimension, Pila *DADA){
    for(int i = 0; i < dimension; i++){
        apilar(DADA, array[i]);
    }
    mostrar(DADA);
}

//---------------------------------------------Ejercicio 5 ------------------------------------------------------------------//
float sumarElementosDelArray(float *array, int dimension){
    float acumulador = 0;
    for(int i = 0; i < dimension; i++){
        acumulador += array[i];
    }
    printf("El total de la suma de todos los numeros del array es %d", acumulador);
    return acumulador;
}
//---------------------------------------------Ejercicio 6 ------------------------------------------------------------------//
void buscarCaracterEnArray(char *array, int dimension, char datoABuscar){
    int datoEncontrado = 0;
    for(int i = 0; i < dimension; i++){
        if (array[i] == datoABuscar){
            datoEncontrado = 1;
        }
    }
    if (datoEncontrado == 1){
        printf("Se encontro el dato que buscabas");
    }
    else{
        printf("No se encontro el dato que buscabas");
    }
}
//---------------------------------------------Ejercicio 8 ------------------------------------------------------------------//
char obtenerMaximoCaracter(char arreglo[], int longitud) {
    if (longitud == 0) {
        // Si el arreglo está vacío, devolvemos un carácter nulo.
        return '\0';
    }

    char maximo = arreglo[0]; // Suponemos que el primer elemento es el máximo inicialmente.

    // Iteramos sobre el arreglo para encontrar el máximo.
    for (int i = 1; i < longitud; ++i) {
        if (arreglo[i] > maximo) {
            maximo = arreglo[i];
        }
    }

    return maximo;
}
//---------------------------------------------Ejercicio 9 ------------------------------------------------------------------//
bool esCapicua(int arreglo[], int longitud) {
    int inicio = 0;
    int fin = longitud - 1;

    while (inicio < fin) {
        if (arreglo[inicio] != arreglo[fin]) {
            return false; // Si los elementos en las posiciones inicio y fin no son iguales, el arreglo no es capicúa.
        }
        inicio++;
        fin--;
    }
    return true; // Si llegamos aquí, el arreglo es capicúa.
}
//---------------------------------------------Ejercicio 10 ------------------------------------------------------------------//
void invertirArreglo(int arreglo[], int longitud) {
    int inicio = 0;
    int fin = longitud - 1;

    while (inicio < fin) {
        // Intercambiar los elementos en las posiciones inicio y fin
        int temp = arreglo[inicio];
        arreglo[inicio] = arreglo[fin];
        arreglo[fin] = temp;

        inicio++;
        fin--;
    }
}
//---------------------------------------------Ejercicio 12 ------------------------------------------------------------------//
void intercalarArreglosOrdenados(char arreglo1[], int longitud1, char arreglo2[], int longitud2, char arregloResultante[]) {
    int indice1 = 0, indice2 = 0, indiceResultado = 0;

    // Mientras haya elementos en ambos arreglos
    while (indice1 < longitud1 && indice2 < longitud2) {
        // Comparar los elementos actuales de ambos arreglos
        if (arreglo1[indice1] < arreglo2[indice2]) {
            arregloResultante[indiceResultado++] = arreglo1[indice1++];
        } else {
            arregloResultante[indiceResultado++] = arreglo2[indice2++];
        }
    }

    // Agregar los elementos restantes del primer arreglo
    while (indice1 < longitud1) {
        arregloResultante[indiceResultado++] = arreglo1[indice1++];
    }

    // Agregar los elementos restantes del segundo arreglo
    while (indice2 < longitud2) {
        arregloResultante[indiceResultado++] = arreglo2[indice2++];
    }
}
//---------------------------------------------Ejercicio 13 ------------------------------------------------------------------//
void generarVectorSumaAnteriores(int vector[], int longitud) {
    int suma = 0;
    for (int i = 0; i < longitud; i++) {
        suma += vector[i]; // Sumar el elemento actual al acumulador
        vector[i] = suma;  // Almacenar la suma acumulada en el elemento actual
    }
}
