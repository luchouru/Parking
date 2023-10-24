#include "vehiculo.h"

void cargaVehiculo(Vehiculo &v)
{
    printf("Ingrese la matricula del vehiculo: ");
    strCrear(v.matricula);
    scan(v.matricula);

    printf("ingrese el departamento del vehiculo: ");
    cargaDepartamento(v.departamento);

    printf("Ingrese la cedula del conductor: ");
    fflush(stdin);
    scanf("%ld", &v.cedula);

    printf("Ingrese la hora de entrada\n");
    cargaHora(v.h);

    cargaClasificacion(v.discriminante);

    switch(v.discriminante)
    {
    case AUTO:
        cargaAuto(v.tipoDato.a);
        break;
    case CAMIONETA:
        cargaCamioneta(v.tipoDato.c);
        break;
    }
}

void desplegarVehiculo(Vehiculo v)
{
    printf("la matricula del vehiculo es ");
    print(v.matricula);
    printf("\n");
    printf("El departamento del vehiculo es ");
    desplegarDepartamento(v.departamento);
    printf("\n");
    printf("La cedula del conductor es %ld", v.cedula);
    printf("\n");
    desplegarHora(v.h);
    printf("\n");
    desplegarClasificacion(v.discriminante);
    printf("\n");
    switch(v.discriminante)
    {
    case AUTO:
        desplegarAuto(v.tipoDato.a);
        break;
    case CAMIONETA:
        desplegarCamioneta(v.tipoDato.c);
        break;
    }
}

void darMatricula(Vehiculo v, string &aux)
{
    strCrear(aux);
    strCop(aux, v.matricula);
}

Departamento darDepartamento(Vehiculo v)
{
    return v.departamento;
}

long int darCedula(Vehiculo v)
{
    return v.cedula;
}

Hora darHoraEntrada(Vehiculo v)
{
    return v.h;
}

Clasificacion darClasificacion(Vehiculo v)
{
    return v.discriminante;
}

Auto darAuto(Vehiculo v)
{
    return v.tipoDato.a;
}

Camioneta darCamioneta(Vehiculo v)
{
    return v.tipoDato.c;
}

void desplegarHoraEntrada(Vehiculo v)
{
    desplegarHora(v.h);
}

void desplegarMatricula(Vehiculo v)
{
    print(v.matricula);
}

int devolverHH(Vehiculo v)
{
    return v.h.hh;
}

int darCapacidadCamioneta(Vehiculo v)
{
    return v.tipoDato.c.capacidad;
}

int devolverMM(Vehiculo v)
{
    return v.h.mm;
}

