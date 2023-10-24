#include "menu.h"

void mostrarMenuPrincipal(int &op)
{
    printf("\n\n(1)- Registrar ingreso de un vehiculo.");
    printf("\n(2)- Registrar partida de un vehiculo.");
    printf("\n(3)- Menu de conusltas y listados.");
    printf("\n(4)- Salir del progrma.");
    printf("\n\nIngrese una opcion: ");
    scanf("%d",&op);
}

void mostrarMenuConultas (int &op)
{
    printf("\n\n(1)- Total recaudado hasta el momento por concepto de tickets.");
    printf("\n(2)- Cantidad de autos y cantidad de camionetas registrados actualmente.");
    printf("\n(3)- Cantidad de vehiculos matriculados en un departamento determinado.");
    printf("\n(4)- Listado de veiculos registrados actualmente.");
    printf("\n(5)- Listado detallado de un vehiculo.");
    printf("\n(6)- Listado de vehiculos que ingresaron dentro de una hora determinada.");
    printf("\n(7)- Listado de camionetas que superan una capacidad de carga determinada.");
    printf("\n(8)- Volver al menu principal.");
    printf("\n\nIngrese una opcion: ");
    scanf("%d",&op);
}
