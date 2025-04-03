/*Realizar un programa que ingrese 5 palabras y devuelta la cadena de
caracteres repetidos más larga entre ellas*/
#include <stdio.h>
#include <string.h>

int main() {
    char palabras[5][100];
    char subcadenaMasLarga[100] = ""; 
    int longitudMaxima = 0;

    printf("Ingresa 5 palabras:\n");
    for (int i = 0; i < 5; i++) {
        printf("Palabra %d: ", i + 1);
        scanf("%s", palabras[i]);
    }

    
    for (int i = 0; i < strlen(palabras[0]); i++) {
        for (int longitud = 1; i + longitud <= strlen(palabras[0]); longitud++) {
            char subcadenaActual[100];
            strncpy(subcadenaActual, &palabras[0][i], longitud);
            subcadenaActual[longitud] = '\0';

            int repetidaEnTodas = 1;  
            for (int j = 1; j < 5; j++) {
                if (strstr(palabras[j], subcadenaActual) == NULL) {
                    repetidaEnTodas = 0; 
                    break;
                }
            }

            if (repetidaEnTodas && longitud > longitudMaxima) {
                longitudMaxima = longitud;
                strcpy(subcadenaMasLarga, subcadenaActual);
            }
        }
    }

    if (strlen(subcadenaMasLarga) > 0) {
        printf("La subcadena repetida más larga es: %s\n", subcadenaMasLarga);
    } else {
        printf("No se encontraron subcadenas repetidas.\n");
    }

    return 0;
}