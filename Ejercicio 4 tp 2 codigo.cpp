/* Realiza un programa eque reemplace todas las apariciones de un caracter en una cadena de caracteres
 ingresado por el usuario por otro caracter tambien ingresado por el usuario. */
 
#include <stdio.h>
#include <string.h>

int main() {
    char cadena[100];
    char letra1;
    char letra2;

    printf("Ingrese la cadena de caracteres:\n");
    scanf("%s", cadena); 

    printf("Ingrese la letra que quiere reemplazar:\n");
    scanf(" %c", &letra1); 

    printf("Ingrese la letra por la cual quiere reemplazar:\n");
    scanf(" %c", &letra2); 

    int longitud = strlen(cadena);

    for (int i = 0; i < longitud; i++) {
        if (cadena[i] == letra1) {
            cadena[i] = letra2;
        }
    }

    printf("%s\n", cadena); 
    return 0;
}
