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

#include <stdio.h> // STDIO significa Standard Input Output (Entrada/Salida estándar ). Tiene algunas funciones predefinidas como int printf(), scanf(), etc.
#include<stdbool.h> 
#define PI 3.1416 // se define la variable constante escribiendo primero #define seguido de espacio nombre de constante, espacio y valor de la constante
int main()
{
      
    float E = 1.24E3; // almacena caracteres tipo real y tiene mas capacidad de almacenamiento que una variable de tipo entero (32 bits)
    int num1 = 1; // este tipo de variable solo almacena numeros enteros (16 bits)
    char A,B,C; // este tipo de variable almacena datos de tipo caracter (8 bits)
    double D = 3.17; // proporciona las magnitudes más grandes y pequeñas posibles para un número (64 bits)
    long double Pi = 3.14159; // proporciona las magnitudes aun más grandes y pequeñas posibles para un número y tambien tiene mas exactitud que double (64 bits)
    char nombre[26]; // Es una cadena de caracteres
    bool Verdad = true; // su valor resultante solo podra ser verdadero o tambien conocido como 1, en este caso encendido (1 byte)
    bool Falso = false; // su valor resultante solo podra ser falso o tambien conocido como 0, en este caso apagado (0 byte)

    printf("El valor de la constante PI es: %.4f\n\n",PI);
    printf("nombre: ");
    gets(nombre);
    printf("\nEl nombre fue: %s",nombre);
    printf("Hola C");
    return 0; // Sirve para indicar una ejecución exitosa del programa
}