#include "clasificacion.h"

void cargaClasificacion(Clasificacion &c)
{
    int a;
    boolean correcto = FALSE;
    do
    {
        printf("ingrese 1 para AUTO o 2 para CAMIONETA: ");
        fflush(stdin);
        scanf("%d", &a);
        switch(a)
        {
        case 1:
            c = AUTO;
            correcto = TRUE;
            break;
        case 2:
            c = CAMIONETA;
            correcto = TRUE;
            break;
        default:
            printf("la letra ingresada no es correcta");
            break;
        }
    }
    while(!correcto);
}

void desplegarClasificacion(Clasificacion c)
{
    switch(c)
    {
    case AUTO:
        printf("Auto");
        break;
    case CAMIONETA:
        printf("Camioneta");
        break;
    }
}


