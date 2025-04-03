/*Desarrolla un programa que busque la primera aparición de una
subcadena dentro de una cadena más larga. Mencionar si dicha subcadena
se encuentra y en qué posición se empieza.*/
#include <stdio.h>
#include <string.h>

int main() {
    char cadena[200];
    char subcadena[100];
    int i, j, posicion = -1; 

    printf("Ingresa la cadena principal: ");
    fgets(cadena, sizeof(cadena), stdin);

    printf("Ingresa la subcadena a buscar: ");
    fgets(subcadena, sizeof(subcadena), stdin);

    
    cadena[strcspn(cadena, "\n")] = '\0';
    subcadena[strcspn(subcadena, "\n")] = '\0';

    
    for (i = 0; cadena[i] != '\0'; i++) {
        for (j = 0; subcadena[j] != '\0'; j++) {
            if (cadena[i + j] != subcadena[j]) {
                break; 
            }
        }
        if (subcadena[j] == '\0') {
            posicion = i; 
            break; 
        }
    }

    
    if (posicion != -1) {
        printf("La subcadena se encuentra en la posicion: %d\n", posicion);
    } else {
        printf("La subcadena no se encuentra en la cadena principal.\n");
    }

    return 0;
}
