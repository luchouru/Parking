#include "estacionamiento.h"

int buscarPosicion(Estacionamiento e, string mat)
{
    boolean existe = FALSE;
    string aux;
    int i = 0;
    do
    {
        darMatricula(e.arre[i], aux);
        if(strEq(mat, aux))
            existe = TRUE;
        else i++;
    }
    while(!existe && i < e.tope);
    return i;
}

boolean existeVehiculoSegMatricula(Estacionamiento e, string mat)
{
    boolean existe = FALSE;
    string aux;
    int i = 0;
    do
    {
        darMatricula(e.arre[i], aux);
        if(strEq(mat, aux))
            existe = TRUE;
        else i++;
    }
    while(!existe && i < e.tope);
    return existe;
}

void insertar(Estacionamiento &e, Vehiculo v)
{
    e.arre[e.tope] = v;
    e.tope++;
}

void QautosQcamionetas(Estacionamiento e, int &Qa, int &Qc)
{
    Qa = 0;
    Qc =0;
    for(int i = 0; i < e.tope; i++)
    {
        if(darClasificacion(e.arre[i]) == AUTO)
            Qa++;
        else Qc++;
    }
}

int contarMatriculados(Estacionamiento e, Departamento dep)
{
    int contar =0;
    for(int i = 0; i < e.tope; i++)
    {
        if(darDepartamento(e.arre[i]) == dep)
            contar++;
    }
    return contar;
}

void listarDatos(Estacionamiento e)
{
    for(int i = 0; i < e.tope; i++)
    {
        printf("cedula: %ld ", darCedula(e.arre[i]));
        desplegarHoraEntrada(e.arre[i]);
        printf(" matricula: ");
        desplegarMatricula(e.arre[i]);
        printf("\n");
    }
}

void inicializar(Estacionamiento &e)
{
    e.tope = 0;
}

void listarPorHoras(Estacionamiento e, Hora h)
{
    boolean existe = FALSE;
    for(int i = 0; i < e.tope; i++)
        if(devolverHH(e.arre[i]) == h.hh)
        {
            printf("Matricula: ");
            desplegarMatricula(e.arre[i]);
            printf(" Cedula: %ld", darCedula(e.arre[i]));
            printf("\n");
            existe = TRUE;
        }

    if (!existe)
        printf("No hay vehiculos ingresados en ese horario");
}

void listarPorCapacidad(Estacionamiento e, int cap)
{
    boolean existe = FALSE;
    for(int i = 0; i < e.tope; i++)
        if(darCapacidadCamioneta(e.arre[i]) >= cap && darClasificacion(e.arre[i])==CAMIONETA)
        {
            printf("Matricula: ");
            desplegarMatricula(e.arre[i]);
            printf(" Cedula: %ld", darCedula(e.arre[i]));
            printf("\n");
            existe = TRUE;
        }

    if (!existe)
        printf("No hay camionetas con igual o mayor capacidad");
}

void costoTotal(Estacionamiento e, string mat, Hora s, int &ticket)
{
    ticket = ticket + costoUnitario(e, s, mat);
}

void eliminar(Estacionamiento &e, string mat)
{
    int i = buscarPosicion(e,mat);
    for (int j = i; j<e.tope-1; j++)
    {
        e.arre[j] = e.arre[j+1];
    }
    e.tope--;
}

boolean lleno(Estacionamiento e)
{
    boolean lleno = FALSE;

    if(e.tope >= N)
        lleno = TRUE;

    return lleno;
}

int costoUnitario(Estacionamiento e, Hora s, string mat)
{
    int i = buscarPosicion(e,mat);
    int entrada =0, salida =0, hh =0, mm=0;
    entrada = devolverHH(e.arre[i])*60 + devolverMM(e.arre[i]);
    salida = s.hh * 60 + s.mm;
    hh = ((salida - entrada)/60)*100;
    if ((salida - entrada)%60 != 0)
        mm = 60;
    return hh + mm;

}

boolean vacio(Estacionamiento e)
{
    boolean vacio = FALSE;
    if(e.tope == 0)
        vacio = TRUE;
    return vacio;
}

void listarDatosTotales(Estacionamiento e, string mat)
{
    int i = buscarPosicion(e,mat);
    desplegarVehiculo(e.arre[i]);
}

boolean controlHora (Estacionamiento e,Hora s, string mat)
{
    boolean valido = FALSE;
    int i = buscarPosicion(e,mat);
    int entrada =0, salida =0;
    entrada = devolverHH(e.arre[i])*60 + devolverMM(e.arre[i]);
    salida = s.hh * 60 + s.mm;
    if ((salida - entrada)>0)
        valido = TRUE;
    else if (entrada == 1319 && salida == 1319)
        valido = TRUE;
    return valido;
}
