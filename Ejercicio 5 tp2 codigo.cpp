/*escribi un programa que cuente el numero de palabras en una cadena ingresada por el usuario*/

#include <stdio.h>
#include <string.h>

int main() {
    char cadena[100];
    int contadorPalabras = 0;
    int dentroDePalabra = 0;

    printf("Ingrese una cadena de caracteres:\n");
    fgets(cadena, sizeof(cadena), stdin);

   
    cadena[strcspn(cadena, "\n")] = 0;

    for (int i = 0; cadena[i] != '\0'; i++) {
        if (cadena[i] == ' ' || cadena[i] == '\t' || cadena[i] == '\n' || cadena[i] == '\r') {
            dentroDePalabra = 0;
        } else if (dentroDePalabra == 0) {
            dentroDePalabra = 1;
            contadorPalabras++;
        }
    }

    printf("El numero de palabras en la cadena es: %d\n", contadorPalabras);

    return 0;
}
