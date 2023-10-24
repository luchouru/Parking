#include "departamento.h"

void cargaDepartamento(Departamento &d)
{
    int opcion;
    boolean correcto = FALSE;
    do
    {
        printf("\n(1) Artigas \t\t(6) Flores \t\t(11) Paysandu \t(16) San Jose \n(2) Canelones \t\t(7) Florida \t\t(12) Rio Negro \t(17) Soriano \n(3) Cerro Largo \t(8) Lavalleja \t\t(13) Rivera \t(18) Tacuarembo \n(4) Colonia \t\t(9) Maldonado \t\t(14) Rocha \t(19) Treinta y tres \n(5) Durazno \t\t(10) Montevideo \t(15) Salto");
        printf("\n\nIndique el numero correspondiente al departamento: ");
        fflush(stdin);
        scanf("%d", &opcion);
        switch (opcion)
        {
        case 1:
            d = ARTIGAS;
            correcto = TRUE;
            break;
        case 2:
            d = CANELONES;
            correcto = TRUE;
            break;
        case 3:
            d = CERROLARGO;
            correcto = TRUE;
            break;
        case 4:
            d = COLONIA;
            correcto = TRUE;
            break;
        case 5:
            d = DURAZNO;
            correcto = TRUE;
            break;
        case 6:
            d = FLORES;
            correcto = TRUE;
            break;
        case 7:
            d = FLORIDA;
            correcto = TRUE;
            break;
        case 8:
            d = LAVALLEJA;
            correcto = TRUE;
            break;
        case 9:
            d = MALDONADO;
            correcto = TRUE;
            break;
        case 10:
            d = MONTEVIDEO;
            correcto = TRUE;
            break;
        case 11:
            d = PAYSANDU;
            correcto = TRUE;
            break;
        case 12:
            d = RIONEGRO;
            correcto = TRUE;
            break;
        case 13:
            d = RIVERA;
            correcto = TRUE;
            break;
        case 14:
            d = ROCHA;
            correcto = TRUE;
            break;
        case 15:
            d = SALTO;
            correcto = TRUE;
            break;
        case 16:
            d = SANJOSE;
            correcto = TRUE;
            break;
        case 17:
            d = SORIANO;
            correcto = TRUE;
            break;
        case 18:
            d = TACUAREMBO;
            correcto = TRUE;
            break;
        case 19:
            d = TREINTAYTRES;
            correcto = TRUE;
            break;
        default:
            system("cls");
            printf("\nOpcion incorrecta\n");
            break;
        }
    }
    while(!correcto);
}

void desplegarDepartamento(Departamento d)
{
    switch (d)
    {
    case ARTIGAS:
        printf("Artigas");
        break;
    case CANELONES:
        printf("Canelones");
        break;
    case CERROLARGO:
        printf("Cerro Largo");
        break;
    case COLONIA:
        printf("Colonia");
        break;
    case DURAZNO:
        printf("Durazno");
        break;
    case FLORES:
        printf("Flores");
        break;
    case FLORIDA:
        printf("Florida");
        break;
    case LAVALLEJA:
        printf("Llavalleja");
        break;
    case MALDONADO:
        printf("Maldonado");
        break;
    case MONTEVIDEO:
        printf("Montevideo");
        break;
    case PAYSANDU:
        printf("Paysandu");
        break;
    case RIONEGRO:
        printf("Rio Negro");
        break;
    case RIVERA:
        printf("Rivera");
        break;
    case ROCHA:
        printf("Rocha");
        break;
    case SALTO:
        printf("Salto");
        break;
    case SANJOSE:
        printf("San Jose");
        break;
    case SORIANO:
        printf("Soriano");
        break;
    case TACUAREMBO:
        printf("Tacuarembo");
        break;
    case TREINTAYTRES:
        printf("Treinta y Tres");
        break;
    }
}

