#include <stdio.h>
#include <stdlib.h>

typedef struct
{

    int legajo;
    char sexo;
    float altura;

} ePersona;

ePersona* new_Persona();//constructor por defecto//inicializa en 0 o en algo especifico
ePersona* new_Persona_Parametros(int,char,float);

void persona_SetLegajo(ePersona*,int);
int persona_GetLegajo(ePersona*);

void persona_delete(ePersona* unaPersona);
void persona_Mostrar(ePersona* unaPersona);
