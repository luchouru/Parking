#include "boolean.h"

void carga_boolean(boolean &b)
{
    int c;
    fflush(stdin);
    scanf("%d", &c);
    if(c == 1)
    {
        b = TRUE;
    }
    else b = FALSE;

}
