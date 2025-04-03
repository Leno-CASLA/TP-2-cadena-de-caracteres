/*Realiza un programa que cuente cuántas vocales tiene una cadena de
caracteres ingresada por el usuario.*/
#include <stdio.h>

int main() {
    char cadena[100];
    int contador_vocales = 0;
    char caracter;
    int i = 0;

    printf("Ingresa una cadena de caracteres: ");

    
    while ((caracter = getchar()) != '\n' && i < 99) {
        cadena[i] = caracter;
        i++;
    }
    cadena[i] = '\0'; 

    
    for (int j = 0; cadena[j] != '\0'; j++) {
        char caracter = cadena[j];
        if (caracter == 'a' || caracter == 'e' || caracter == 'i' || caracter == 'o' || caracter == 'u' ||
            caracter == 'A' || caracter == 'E' || caracter == 'I' || caracter == 'O' || caracter == 'U') {
            contador_vocales++;
        }
    }

    
    printf("La cadena ingresada tiene %d vocales.\n", contador_vocales);

    return 0;
}
