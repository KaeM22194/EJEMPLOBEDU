#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int precio, puntos;

    puntos=24;
    precio=3;

    int ticket=(puntos/12);
    
    if(ticket>=precio){
       printf("Comprar");
    }
        
    if (ticket<precio)
    {
printf("faltan puntos");
    }
        
    printf("%d", ticket);

    return 0;

}