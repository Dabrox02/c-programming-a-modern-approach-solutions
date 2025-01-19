/*
For each of the following pairs of scanf format strings, indicate whether or not the two
strings are equivalent. If they’re not, show how they can be distinguished.

(a) "%d" versus " %d"
(b) "%d-%d-%d" versus "%d -%d -%d"
(c) "%f" versus "%f "
(d) "%f,%f" versus "%f, %f"

*/

#include <stdio.h>

int main(void)
{
    int x, y, z;
    float v1, v2;
    // scanf("%d -%d -%d", &x, &y, &z);
    // printf("se lee el contenido: %d, %d, %d\n", x, y, z);
    scanf("%f, %f", &v1, &v2);
    printf("se lee el contenido: %f y %f\n", v1, v2);

    return 0;
}

/*

(a) "%d" versus " %d" --> son equivalentes, porque scanf salta los espacios vacios antes del numero

(b) "%d-%d-%d" versus "%d -%d -%d" --> no son equivalentes
"%d-%d-%d" exige que los caracteres - no tengan espacios a su alrededor.
"%d -%d -%d" permite espacios antes de los caracteres -.

(c) "%f" versus "%f " --> no son equivalentes
%f": - Lee un número de tipo float.
- Ignora los espacios en blanco (espacios, tabulaciones, saltos de línea) antes del número.
- Deja de leer justo después de haber procesado el número, sin esperar más entrada.

%f ": - También lee un número de tipo float.
- Ignora los espacios en blanco antes del número y además exige que haya espacios en blanco después del número.
- La presencia del espacio extra (" ") al final obliga a scanf a ignorar cualquier cantidad de espacios o saltos de línea después del número y espera a que llegue un carácter no blanco o finalice la entrada. Esto puede hacer que scanf quede "esperando" en algunos casos.


(d) "%f,%f" versus "%f, %f" --> son equivalentes 
Ambos leen un numero flotante que debe ir seguido de una coma, y luego puede ir cualquier cantidad de espacios que seran ignorados hasta otro numero flotante

*/