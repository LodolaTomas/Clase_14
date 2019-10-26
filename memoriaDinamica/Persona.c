#include "Persona.h"

ePersona* new_Persona()
{
    ePersona* puntero;
    //void es nada//void* cualquier tipo de dato
    puntero= (ePersona*)malloc(sizeof(ePersona));//reserva espacio en memoria//direccion de memoria del tamaño de una persona

    return puntero;
}

ePersona* new_Persona_Parametros(int legajo,char sexo,float altura)
{
    ePersona* p= new_Persona();

    if(p!=NULL)
    {
        p->legajo=legajo;
        p->sexo=sexo;
        p->altura=altura;
    }
    return p;
}

void persona_SetLegajo(ePersona* unaPersona,int legajo)
{
    if(unaPersona!=NULL && legajo>0)
    {
        unaPersona->legajo=legajo;
    }
}
int persona_GetLegajo(ePersona* unaPersona)
{
    int retorno=-1;

    if(unaPersona!=NULL)
    {
        retorno=unaPersona->legajo;
    }
    return retorno;
}


void persona_delete(ePersona* unaPersona)
{
    free(unaPersona);
}

void persona_Mostrar(ePersona* unaPersona)
{
    printf("%d--%c--%.2f\n", unaPersona->legajo, unaPersona->sexo, unaPersona->altura);
}
