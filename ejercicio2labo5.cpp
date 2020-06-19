#include "conio.h"
#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#include "iostream"


int main()
{
    int horas, minutos, segundos;

    printf( "\n   Introduzca horas: " );
    scanf( "%d", &horas );
    printf( "\n   Introduzca minutos: " );
    scanf( "%d", &minutos );
    printf( "\n   Introduzca segundos: " );
    scanf( "%d", &segundos );

    if ( horas >= 0 && horas <= 23 && minutos >= 0 && minutos <= 59 && segundos >= 0 && segundos <= 59 )
    {
        segundos++;
        if ( segundos == 60 )
        {
            segundos = 0;
            minutos++;
            if ( minutos == 60 )
            {
                minutos = 0;
                horas++;
                if ( horas == 24 )
                    horas = 0;
            }
        }
        printf( "\n   Un segundo despu%cs la hora es: %d:%d:%d", 130, horas, minutos, segundos );
    }
    else
        printf( "\n   ERROR: La hora es incorrecta." );

    getch(); 

    return 0;
}
