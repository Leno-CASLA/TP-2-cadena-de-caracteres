/*CREA UN PROGRAMA QUE INVIERTA EL ORDEN DE LAS PALABRAS EN UNA CADENA*/

#include <stdio.h>
#include <string.h>

int main() {
    char cadena[100];
    char palabras[50][50]; 
    int numPalabras = 0;
    int i, j, k;

    printf("Ingrese una cadena de caracteres:\n");
    fgets(cadena, sizeof(cadena), stdin);

    
    int len = strlen(cadena);
    if (len > 0 && cadena[len - 1] == '\n') {
        cadena[len - 1] = '\0';
    }

  
    i = 0;
    j = 0;
    k = 0;
    while (cadena[i] != '\0') {
        if (cadena[i] == ' ' || cadena[i] == '\t' || cadena[i] == '\n' || cadena[i] == '\r') {
            if (j > 0) { 
                palabras[k][j] = '\0';
                k++;
                j = 0;
            }
        } else {
            palabras[k][j] = cadena[i];
            j++;
        }
        i++;
    }
    if (j > 0) { 
        palabras[k][j] = '\0';
        k++;
    }
    numPalabras = k;

    
    printf("Cadena con palabras invertidas:\n");
    for (i = numPalabras - 1; i >= 0; i--) {
        printf("%s", palabras[i]);
        if (i > 0) {
            printf(" "); 
        }
    }
    printf("\n");

    return 0;
}
