#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int precio, puntos;

    scanf("%d", puntos);
    scanf("%d", precio);

    int ticket=(puntos/12);
    
    if(ticket>=precio){
       printf("Comprar");
    }
        
    if (ticket<precio)
    {
printf("faltan puntos");
    }
        
    

    return 0;

}