#include <stdio.h>
#include <stdlib.h>
#include "Persona.h"

int main()
{

    ePersona* puntero=new_Persona_Parametros(1000,'M',1.7);//constructor

    persona_SetLegajo(puntero,1000);

    if(puntero!=NULL)
    {
        printf("La persona es:\n");//las llamadas se apilan en memoria

        if(persona_GetLegajo(puntero)>1000)
        {
                persona_Mostrar(puntero);
        }


    }

    persona_delete(puntero);

    return 0;
}


