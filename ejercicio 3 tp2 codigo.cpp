/*realiza un oprograma que determine si una cadena de caracteres ingresada por el usuario es  palindromo (se lee igual de izquierda a derecha que de derecha a izquierda)*/

#include <stdio.h>
#include <string.h>

int main(){
	
	char caracter[100];
	char copia[100];
	int longitud;
	
	printf("ingrese una cadena de caracteres:\n");
	scanf("%s", caracter);
	
	strcpy(copia,caracter);
	
	longitud = strlen(caracter);
	int auxiliar = longitud-1;
	int correcto = 0;
	for(int i=0;i<longitud; i++){	
		  if (caracter[i] == copia[auxiliar]){
		      correcto++;
		      auxiliar--;
		  }
		if(longitud = correcto){printf("es palindromo\n");
		}
	  else {printf("no es palindromo\n"); }
	
}
}

