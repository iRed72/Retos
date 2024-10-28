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

/*
    *Correcciones

    1.- Falta terminar el ejercicio, faltan operadores como el comparacion, ||, &&, entre otros.

    2.- Falta agregar las estruturas de control si no sabes que son investigar y agregar todas las
        estructuras de control que tiene C tambien agreagreles un comentario a cada uno indicando cual
        es su funcion

    3.- El nombre de tus varibles son todas en mayusculas, no tiene nada de malo y no afecta en nada 
        en tenerlas asi pero si vas a usar palabras grandes puede que no muy util escribir todo en
        mayusculas porque puede no ser agradable para la vista ademas no es algo usual
        Ejemplo:

            int PRIMERNUMERO = 1;
            int PrimerNumero = 1;

    4.- Cuando pides los numeros a ingresar solo escribes "Escribe los 2 numeros" puede que suene tonto
        pero si le das el programa a alguien se va confunfir y no va saber a que se refiere siempre 
        tienes que hacer todo de manera intuitiva podrias cambirlo por "Ingrese un numero".

        Cuando pides los numero los pides en el mismo renglon es decir tienes que 
        ingresar "n1, n2" por lo que no es nada intuitivo por lo que yo lo considero que esta mal
        es mejor hacer lo siguiente
        Ejemplo:
            printf("Ingrese un numero: ");
            scanf("%i",&n1);
            printf("Ingrese otro numero: ");
            scanf("%i",&n2);
        De esta manera es mas facil para el usuario ya se en entendimiento o escritura

    5.- En el if pones que si sum es mayor que res imprima "verdadero" pero nuevamente el usuario
        no sabe a que se refiere imagina que solo corres el programa sin ver el codigo ahi solo ves
        verdadero pero no sabes ques verdadero asi que te recomiendo agregar un impresion que diga que
        es verdadero
        Ejemplo:
            if (SUM > RES)
            {
                printf("\Su suma es mayor que su resta");
            }

    Notas o comentarios:
        -Por ahi tienes un comentario ñ donde usas /* * pero ese es un comentario de bloqe y es usado
        cuando vas escribir mucho como lo que te pongo si lo quieres hacer algo pequeño de una linea
        simplemte pon "//" y todo lo puesto sepues de eso en un renglon sera comentado.

        - Algunas de las cosas que te dije son como recomendaciones que llevan a una buena escritura 
        de programacion son opcionales de momento pero tarde o teprano tendras que usarlas

        Tambien consejo es que no porque algo funcione quiere decir que esta bien es decir si un
        codigo funciona es correcto pero no quiere decir que es lo mejor por ejemplo  lo que te dije 
        de ingresar los datos no es algo intuitivo y dunciona pero no esta bien del todo.

     *No te voy a revisar el ejercico funcional opcional hasta que este corrgido el Reto_00 y hayas 
     *echo bien la priemra parte del Reto_01
*/

// *Ejercicio 001

#include <stdio.h>
#include <math.h>
int n1,n2,Num;
float Oper,Sum,Res,Div,Mult,Mod;
int main()
{
    
    printf("Escoge un numero en donde: \n1=suma \n2=resta \n3=multiplicacion \n4=division \n5=Modulo \nNumero: ");
    scanf("%i",&Num);
    printf("Escribe el primer numero: ");
    scanf("%i",&n1);
    printf("Escribe el segundo numero: ");
    scanf("%i",&n2);
    switch (Num)
    {
        case 1: Oper=n1+n2;
        break;
        case 2: Oper=n1-n2;
        break;
        case 3: Oper=n1*n2;
        break;
        case 4: Oper=n1/n2;
        break;
        case 5: Oper=(n1%n2);
        break;
    }
    printf("%0.3f",Oper);
    return 0;
}

// *Ejercicio Extra (opcional)

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