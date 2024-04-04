#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

int cargarArray(int *array, int dimension);
void mostrarArray(int *array, int dimension);
int sumarElementosDelArray(int *array, int dimension);
void pasarDatosDeUnArrayAUnaPila(int *array, int dimension, Pila *DADA);
float sumarElementosDelArray(float *array, int dimension);
void buscarCaracterEnArray(char *array, int dimension, char datoABuscar);

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
    int dimensionArray = 10;
    int numArray[dimensionArray];
    Pila DADA;
    inicpila(&DADA);

    int cantidadElementos = cargarArray(numArray, dimensionArray);

    pasarDatosDeUnArrayAUnaPila(numArray, dimensionArray, &DADA);

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
//---------------------------------------------Ejercicio 10 ------------------------------------------------------------------//
int invertirArray(int *array, int dimension){
    int valor = 0;
    int valor2 = 0;
    for(int i = 0; i <dimension; i++){
        valor = array[i];
        valor2 = array[dimension] - i;

        array[dimension] = valor;
        array[i] = valor;
    }
}
