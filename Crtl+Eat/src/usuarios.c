#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LEN 32

int esEntero(const char *str) {
    int valor;
    char extra;

    // Verifica que sscanf solo lea un número entero sin caracteres adicionales
    if (sscanf(str, "%i %c", &valor, &extra) == 1) {
        return 1; // Es un número entero válido
    }
    return 0; // No es un número entero
}

int iniciar_sesion(){
	// array de caracters
		char str[MAX_LEN];
		printf("email:");
		fflush(stdout); // espacio para el array out
		fgets (str, MAX_LEN, stdin); // pilla lo que ponga en la consola in

		char* s=malloc(MAX_LEN *sizeof(char)); // hace esapcio para el puntero de char = string
		sscanf(str,"%s",s);
		//printf("%s\n",s);

		char str2[MAX_LEN];
				printf("contraseña:");
				fflush(stdout); // espacio para el array out
				fgets (str2, MAX_LEN, stdin); // pilla lo que ponga en la consola in

				char* s2=malloc(MAX_LEN *sizeof(char)); // hace esapcio para el puntero de char = string
				sscanf(str2,"%s",s2);
				//printf("%s\n",s);
		free(s);
		free(s2);

		return 0;
}
int registrar(){
	// array de caracters
			char str3[MAX_LEN];
			printf("Nombre:");
			fflush(stdout); // espacio para el array out
			fgets (str3, MAX_LEN, stdin); // pilla lo que ponga en la consola in

			char* s3=malloc(MAX_LEN *sizeof(char)); // hace esapcio para el puntero de char = string
			sscanf(str3,"%s",s3);
			//printf("%s\n",s);

			char str4[MAX_LEN];
			printf("Email:");
			fflush(stdout); // espacio para el array out
			fgets (str4, MAX_LEN, stdin); // pilla lo que ponga en la consola in

			char* s4=malloc(MAX_LEN *sizeof(char)); // hace esapcio para el puntero de char = string
			sscanf(str4,"%s",s4);
			//printf("%s\n",s);

			//HACER LO DE MARKEL PARA CONFIRMAR CONTRASEÑA ==
			char str5[MAX_LEN];
			printf("Contraseña:");
			fflush(stdout); // espacio para el array out
			fgets (str5, MAX_LEN, stdin); // pilla lo que ponga en la consola in

			char* s5=malloc(MAX_LEN *sizeof(char)); // hace esapcio para el puntero de char = string
			sscanf(str5,"%s",s5);
			//printf("%s\n",s);

			int tlf;
			char str6[MAX_LEN];
			printf("Telefono:");
			fflush(stdout); // espacio para el array out
			fgets (str6, MAX_LEN, stdin); // pilla lo que ponga en la consola in
			sscanf(str6,"%i",&tlf);

			if (esEntero(str6) == 0) {
				printf("No es numero:");
				tlf = 0;
				return -1;
			}
			//freeIfNeeded();
			printf("%i\n",tlf);

			free(s3);
			free(s4);
			free(s5);
			return 0;
}
