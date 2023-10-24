#include "hora.h"

void cargaHora(Hora &h)
{
    boolean correcto = FALSE;
    do
    {
        printf("Ingrese una hora: ");
        fflush(stdin);
        scanf("%d", &h.hh);
        if(h.hh > 07 && h.hh < 22)
            correcto = TRUE;
        else printf("ingrese una hora valida (08 - 21)\n");
    }
    while(!correcto);

    boolean valido = FALSE;
    do
    {
        printf("Ingrese los minutos: ");
        fflush(stdin);
        scanf("%d", &h.mm);
        if(h.mm >= 0 && h.mm < 60)
            valido = TRUE;
        else printf("ingrese minutos validos (00 - 59)\n");
    }
    while(!valido);
}

void desplegarHora(Hora h)
{
    printf("La hora de entrada es %d:%02d", h.hh, h.mm);
}

int darHora(Hora h)
{
    return h.hh;
}

int darMinutos(Hora h)
{
    return h.mm;
}
