#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cabeceras/usuarios.h"
#define MAX_LEN 32
int imprimir_menu(){
	printf("------------\n");
	printf("¡Bienvenido!\n");
	printf("------------\n");
	printf("Elige una opcion: \n1. Iniciar Sesion \n2. Registrarse \n3. Salir \n");
	return 0;
}

int elige_menu(){
	int opcion = 0;
	while(opcion <1 || opcion>3){
		printf("Introduce la opcion: ");
		fflush(stdout);
		fflush(stdin);
		scanf("%i",&opcion);
		//printf("%i",opcion);
		switch (opcion) {
			case 1:
				//printf("1. Iniciar Sesion\n");
				iniciar_sesion();
				break;
			case 2:
				//printf("2. Registrarse \n");
				registrar();
				break;
			case 3:
				printf("3. Salir \n");
				break;
			default:
				printf("Numero invalido\n");
				break;
		}

	}

		return 0;
}

int main(int argc, char **argv) {
	//imprimir_menu();
	//elige_menu();
	//iniciar_sesion();
	int estado_registro = registrar();
	if (estado_registro != 0) {
		printf("Fallo al registrarse\n");
//		Volver a pedir datos
	}
	return 0;
}

