#ifndef SRC_INGREDIENTES_HEADERS_INGREDIENTE_H_
#define SRC_INGREDIENTES_HEADERS_INGREDIENTE_H_

typedef struct{
	char* id;
	char* nombre;
}Ingrediente;

void crearIngrediente(Ingrediente ingredientes[], int *count);

void eliminarIngrediente(Ingrediente ingredientes[], int *count);

void actualizarIngrediente(Ingrediente ingredientes[], int count);

void listarIngredientes(Ingrediente ingredientes[], int count);




#endif
