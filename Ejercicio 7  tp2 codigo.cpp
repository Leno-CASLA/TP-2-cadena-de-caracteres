/*Realiza un programa que determine si una cadena de caracteres ingresada
por el usuario es un anagrama de otra cadena también ingresada por el
usuario.*/
#include <stdio.h>
#include <string.h>

int main() {
    char cadena1[60];
    char cadena2[60];
    int i, j, con = 0;

    printf("Ingrese la primera cadena: ");
    fgets(cadena1, sizeof(cadena1), stdin);
    printf("Ingrese la segunda cadena: ");
    fgets(cadena2, sizeof(cadena2), stdin);

    
    cadena1[strcspn(cadena1, "\n")] = '\0';
    cadena2[strcspn(cadena2, "\n")] = '\0';

    int longitud1 = strlen(cadena1);
    int longitud2 = strlen(cadena2);

    if (longitud1 != longitud2) {
        printf("Las cadenas ingresadas no son anagramas.\n");
        return 0;
    }

    
    int encontrados[longitud1];
    for (i = 0; i < longitud1; i++) {
        encontrados[i] = 0; 
    }

    
    for (i = 0; i < longitud1; i++) {
        for (j = 0; j < longitud2; j++) {
            if (cadena1[i] == cadena2[j] && encontrados[j] == 0) {
                con++;
                encontrados[j] = 1; 
                break; 
            }
        }
    }

    if (con == longitud1) {
        printf("Las cadenas ingresadas son un anagrama.\n");
    } else {
        printf("Las cadenas ingresadas no son anagramas.\n");
    }

    return 0;
}


