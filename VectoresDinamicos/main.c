#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* pVec;
    int* pAux;
    int i;
    //int vector[5];//estatico
    printf("\n%10s\n","Asignacion del Vector");
    pVec=(int*)malloc(sizeof(int)*5);//dinamico
    //pVec=(int*)calloc(sizeof(int),5);

    if(pVec!=NULL)
    {
        /*for(i=0; i<5; i++)
        {
            printf("Ingrese un Numero: ");
            scanf("%d",pVec+i);
            //*(pVec+i) = i+1;
        }*/

        for(i=0; i<5; i++)
        {
            printf("%d\n",*(pVec+i));
        }
//******************************************************************************//
        printf("\n%10s\n","Ampliacion del Vector");

        pAux=(int*)realloc(pVec,sizeof(int)*10);
//******************************************************************************//
        if(pAux!=NULL)
        {
            pVec=pAux;

            for(i=5; i<10; i++)
            {
                printf("Ingrese un Numero: ");
                scanf("%d",pVec+i);
                //*(pVec+i) = i+1;
            }

            for(i=0; i<10; i++)
            {
                printf("%d\n",*(pVec+i));
            }
//******************************************************************************//
            printf("\n%10s\n","Reduccion del Vector");

            pVec=(int*)realloc(pVec,sizeof(int)*4);
//******************************************************************************//
            for(i=0; i<4; i++)
            {
                printf("%d\n",*(pVec+i));
            }
        }



    }


    return 0;
}
