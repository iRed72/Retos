/*
 * Reto #00: Sintaxis, Variables, Tipos de Datos y Hola Mundo
 * EJERCICIO:
 * - Crea un comentario en el código y coloca la URL del sitio web oficial del
 *   lenguaje de programación que has seleccionado.
 * - Representa las diferentes sintaxis que existen de crear comentarios
 *   en el lenguaje (en una línea, varias...).
 * - Crea una variable (y una constante si el lenguaje lo soporta).
 * - Crea variables representando todos los tipos de datos primitivos
 *   del lenguaje (cadenas de texto, enteros, booleanos...).
 * - Imprime por terminal el texto: "¡Hola, [y el nombre de tu lenguaje]!"
*/

/*
    *Correcciones

    1.- Para que la libreria <math.h>?
        No se agregan o cargan librerias si no se neceitan como en este caso
    
    2.- A todas las variables les asignaste un valor de caracter pero no un valor y agregale tambien
        una descripcion a cada tipo de variable.
        por ejemplo:
            int num1 = 1; // Este tipo de variable almacena solo numeros enteros
        Asi con cada tipo de variable
    
    3.- Creo que te faltan tipos variables aparte de los que agregaste que son: flaot, int, char etc.
        Investiga si te hacen falta y agregalos.
    
    4.- Falta agregar tambien los valores constantes si no sabes que son investiga y agregalos.
    
    5.- De manera opcional investiga para que sirve y porque se agrega la libreria <stdio.h> y
        agregale en forma de comentario los que investigaste lo mismo para el resturn 0;
*/

// *Ejercicio 

#include <stdio.h> // 5
#include <math.h> // 1
#include<stdbool.h> 

int main()
{
    float Q; // 2
    int S; // 2
    char A,B,C,D;
    double R; // 2
    long double F5; // 2
    bool Verdad = true;
    bool Falso = false;

    printf("Hola C");
    return 0; // 5
}