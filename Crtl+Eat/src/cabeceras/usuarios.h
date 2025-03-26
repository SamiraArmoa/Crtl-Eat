#ifndef USUARIOS_H
#define USUARIOS_H

typedef struct{
	char* email;
	char* pssw;
	char* nombre;
	int telefono;
}Usuario;
int iniciar_sesion();
int registrar();
#endif
