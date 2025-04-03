/*Realizar un programa en el cual el usuario primero ingrese una oraci�n

la cual puede estar en may�scula o min�scula o de manera alternada
y luego pueda seleccionar que realice las siguientes acciones
a) Mostrar la oraci�n toda en may�scula
b) Mostrar la oraci�n todo en min�sculas
c) Mostrar la oraci�n alternando una may�scula y una min�scula
D) Mostrar la oraci�n comenzando todas las palabras con may�scula*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char oracion[200];
    char opcion;
    int i, nuevaPalabra;

    printf("Ingresa una oracion: ");
    fgets(oracion, sizeof(oracion), stdin);


    oracion[strcspn(oracion, "\n")] = '\0';

    printf("\nSelecciona una opcion:\n");
    printf("a) Mostrar la oracion toda en mayusculas\n");
    printf("b) Mostrar la oracion toda en minusculas\n");
    printf("c) Mostrar la oracion alternando mayusculas y minusculas\n");
    printf("d) Mostrar la oracion comenzando todas las palabras con mayuscula\n");

    scanf(" %c", &opcion); 

    switch (opcion) {
        case 'a':
            for (i = 0; oracion[i] != '\0'; i++) {
                oracion[i] = toupper(oracion[i]);
            }
            printf("Oracion en mayusculas: %s\n", oracion);
            break;
        case 'b':
            for (i = 0; oracion[i] != '\0'; i++) {
                oracion[i] = tolower(oracion[i]);
            }
            printf("Oracion en minusculas: %s\n", oracion);
            break;
        case 'c':
            for (i = 0; oracion[i] != '\0'; i++) {
                if (i % 2 == 0) {
                    oracion[i] = toupper(oracion[i]);
                } else {
                    oracion[i] = tolower(oracion[i]);
                }
            }
            printf("Oracion alternando mayusculas y minusculas: %s\n", oracion);
            break;
        case 'd':
            nuevaPalabra = 1; 
            for (i = 0; oracion[i] != '\0'; i++) {
                if (isspace(oracion[i])) {
                    nuevaPalabra = 1; 
                } else {
                    if (nuevaPalabra) {
                        oracion[i] = toupper(oracion[i]);
                        nuevaPalabra = 0;
                    } else {
                        oracion[i] = tolower(oracion[i]);
                    }
                }
            }
            printf("Oracion con palabras capitalizadas: %s\n", oracion);
            break;
        default:
            printf("Opcion invalida.\n");
    }

    return 0;
}

