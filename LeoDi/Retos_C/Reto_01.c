/*
 * EJERCICIO:
 * - Crea ejemplos utilizando todos los tipos de operadores de tu lenguaje:
 *   Aritméticos, lógicos, de comparación, asignación, identidad, pertenencia, bits...
 *   (Ten en cuenta que cada lenguaje puede poseer unos diferentes)
 * - Utilizando las operaciones con operadores que tú quieras, crea ejemplos
 *   que representen todos los tipos de estructuras de control que existan
 *   en tu lenguaje:
 *   Condicionales, iterativas, excepciones...
 * - Debes hacer print por consola del resultado de todos los ejemplos.
 *
 * DIFICULTAD EXTRA (opcional):
 * Crea un programa que imprima por consola todos los números comprendidos
 * entre 10 y 55 (incluidos), pares, y que no son ni el 16 ni múltiplos de 3.
 *
 * Seguro que al revisar detenidamente las posibilidades has descubierto algo nuevo.
 */

/* #include <stdio.h>
#include <math.h>
int main()
{
    int i,a;
    for(i=55;i>=10;i--)
        if(i % 2 ==0)
            { 
                 if (i%3==0)
                {
                 if (i==16)
                {
                    a=16;
                    i=i-1;
                }s
                else
                {
                    printf("%i",i);
                }
                }   
    
            } 

return 0;
} */
/*  https://github.com/iRed72/Retos   Lenguaje C*/
#include <stdio.h>
#include <math.h>
int n1,n2,SUM,RES,DIV,MULT,MOD;
int main()
{
    printf("Escribe los 2 numeros: ");
    scanf("%i,%i",&n1,&n2);
    SUM=n1+n2;
    RES=n1-n2;
    DIV=n1/n2;
    MULT=n1*n2;
    MOD=n1%n2;
/* ñ */
    printf("\nSUMA: %i",SUM);
    printf("\nRESTA: %i",RES);
    printf("\nDIVISION: %i",DIV);
    printf("\nMULTIPLICACION: %i",MULT);
    printf("\nMODULO: %i",MOD);
    if (SUM > RES)
    {
        printf("\nVerdadero");
    }
return 0;
}