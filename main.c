/*
 * Este programa fue realizado como la tarea#5 el 6 de septiembre de 2018,
 * para la clase de fundamentos de programación.
 *
 * Su proposito es mostrar el factorial de cualquier número entero
 * dado por el usuario.
 *
 * Fecha: 6 de septiembre de 2018
 * Autor: Eduardo Parga Vela
 * Correo: A01411896@itesm.mx
 */
#include <stdio.h>

int main() {
    //Declaración de variables
    int factorial=1;
    int n;

    //El usuario escribe el número al cual le desea sacar su número factorial.
    printf("Escribre el número factorial:");
    scanf("%i", &n);

    //Ciclo while: mientras que "n" sea mayor a 0, el programa multiplicara
    //los valores de n por factorial, se almacenara el dato en "factorial" y
    // a "n" se le resta 1.
    while(n>0){
        factorial=n*factorial;
        n--;
    }

    //El programa muestra el numero factorial del número introducido por el usuario (n).
    printf("El factorial es: %i", factorial);
    
    return 0;
}