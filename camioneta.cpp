#include "camioneta.h"

void cargaCamioneta(Camioneta &c)
{
    printf("ingrese el modelo de la camioneta: ");
    strCrear(c.modelo);
    scan(c.modelo);

    printf("ingrese la capacidad de la camioneta: ");
    fflush(stdin);
    scanf("%d", &c.capacidad);
}

void desplegarCamioneta(Camioneta c)
{
    printf("El modelo de la camioneta es: ");
    print(c.modelo);
    printf("\n");
    printf("La capacidad de la camioneta es:%d", c.capacidad);
}

void darModelo(Camioneta c, string &s)
{
    strCrear(c.modelo);
    strCop(s, c.modelo);
}

int darCapacidad(Camioneta c)
{
    return c.capacidad;
}
