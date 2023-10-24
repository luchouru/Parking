#include "auto.h"

void cargaAuto(Auto &a)
{
    printf("ingrese la marca del vehiculo: ");
    strCrear(a.marca);
    scan(a.marca);

    printf("ingrese el año del vehiculo: ");
    fflush(stdin);
    scanf("%d", &a.anio);
}

void desplegarAuto(Auto a)
{
    printf("La marca del vehiculo es: ");
    print(a.marca);
    printf("\n");
    printf("El año de fabricacion del vehiculo es: %d", a.anio);
}

void darMarca(Auto a, string &s)
{
    strCrear(a.marca);
    strCop(s, a.marca);
}

int darAnio(Auto a)
{
    return a.anio;
}
